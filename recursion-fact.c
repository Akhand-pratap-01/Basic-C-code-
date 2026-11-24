// Recursion is a programming technique in which a function calls itself to solve a problem.
#include <stdio.h>
int recFact(int num);
int recFact(int num){
    if (num < 0 || num == 1) return 1;
    return num * recFact(num-1);  
}
int main() {
    printf("%d", recFact(5));
    return 0;
}