
const result = document.getElementById("result");
const history = document.getElementById("history");
const buttons = document.querySelector(".buttons");

let expression = "";
let justCalculated = false;

function updateDisplay() {
    result.textContent = expression || "0";
}

function calculateExpression(input) {
    // Sirf mathematical characters allow karo.
    if (!/^[0-9+\-*/().\s]+$/.test(input)) {
        throw new Error("Invalid expression");
    }

    // Operators ke end hone par calculation mat karo.
    if (!input || /[+\-*/.]$/.test(input)) {
        throw new Error("Incomplete expression");
    }

    const answer = Function(
        '"use strict"; return (' + input + ')'
    )();

    if (typeof answer !== "number" || !Number.isFinite(answer)) {
        throw new Error("Invalid result");
    }

    // Floating-point errors ko clean karo.
    return Number(answer.toPrecision(12));
}

function handleInput(value) {
    const operators = ["+", "-", "*", "/"];

    if (value === ".") {
        if (justCalculated) {
            expression = "0.";
            justCalculated = false;
            updateDisplay();
            return;
        }

        const currentNumber = expression.split(/[+\-*/]/).pop();

        if (currentNumber.includes(".")) return;

        if (!currentNumber) expression += "0";
        expression += ".";
    } else if (operators.includes(value)) {
        justCalculated = false;

        if (!expression) {
            if (value === "-") expression = "-";
            else return;
        } else if (/[+\-*/]$/.test(expression)) {
            // Consecutive operators ko replace karo.
            if (value === "-" && !expression.endsWith("-")) {
                expression += value;
            } else {
                expression = expression.slice(0, -1) + value;
            }
        } else {
            expression += value;
        }
    } else {
        if (justCalculated) {
            expression = "";
            justCalculated = false;
        }

        expression += value;
    }

    updateDisplay();
}

function clearCalculator() {
    expression = "";
    history.textContent = "";
    justCalculated = false;
    updateDisplay();
}

function deleteLast() {
    if (justCalculated) {
        clearCalculator();
        return;
    }

    expression = expression.slice(0, -1);
    updateDisplay();
}

function calculate() {
    if (!expression) return;

    try {
        const answer = calculateExpression(expression);

        history.textContent = expression.replaceAll("*", "×")
            .replaceAll("/", "÷") + " =";

        expression = String(answer);
        justCalculated = true;
        updateDisplay();
    } catch {
        result.textContent = "Error";
        expression = "";
        justCalculated = false;
    }
}

function percentage() {
    if (!expression) return;

    try {
        const answer = calculateExpression(expression);
        expression = String(Number((answer / 100).toPrecision(12)));
        history.textContent = "Percentage";
        justCalculated = true;
        updateDisplay();
    } catch {
        result.textContent = "Error";
        expression = "";
        justCalculated = false;
    }
}

// Event delegation: saare buttons ko ek listener.
buttons.addEventListener("click", (event) => {
    const button = event.target.closest("button");
    if (!button) return;

    const action = button.dataset.action;
    const value = button.dataset.value;

    if (action === "clear") clearCalculator();
    else if (action === "delete") deleteLast();
    else if (action === "calculate") calculate();
    else if (action === "percent") percentage();
    else if (value !== undefined) handleInput(value);
});

// Keyboard support.
document.addEventListener("keydown", (event) => {
    const key = event.key;

    if (/^[0-9.]$/.test(key)) {
        handleInput(key);
    } else if (["+", "-", "*", "/"].includes(key)) {
        handleInput(key);
    } else if (key === "Enter" || key === "=") {
        event.preventDefault();
        calculate();
    } else if (key === "Backspace") {
        deleteLast();
    } else if (key === "Escape") {
        clearCalculator();
    } else if (key === "%") {
        percentage();
    }
});

updateDisplay();
