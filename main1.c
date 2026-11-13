#include <stdio.h>
#include <math.h>
// functions
void hello();
int table();
int square(int);
int square2(int);
void even_odd(int);
int getNumber();
int sum(int, int);
int diffrence(int a, int b);
int qube(int);
int largest(int, int, int);
float simpleIntrest(float p, float r, float t);
int calculater();

int main()
{
    int n;
    hello();
    table(5);
    square(5);
    int c = getNumber();
    printf("GET a num is :  %d", c);
    even_odd(9);
    int sum1 = sum(8, 9);
    printf(" Sum is : %d", sum1);
    printf("Diffrence is : %d", diffrence(87, 76));
    printf(" Qube is : %d\n", qube(4));
    printf(" big is %d\n", largest(23, 56, 78));
    printf(" your intrest is %f\n", simpleIntrest(90, 56, 3));
    printf("Enter a Number : ");
    scanf("%d", &n);
    printf("Square is : %d\n", square2(n));
    int x = calculater();
    printf("Calculation is  %d", x);
    return 0;
}
int calculater()
{
    int a, b;
    char c;
    printf("Enter a Number :\n ");
    scanf("%d", &a);
    printf("Enter a Number : \n");
    scanf("%d", &b);
    printf("Enter your symbol: \n");
    scanf(" %c", &c);

    switch (c)

    {
    case 'a':
        return a + b;
        break;
    case 's':
        return a - b;
        break;
    case 'm':
        return a * b;
        break;
    case 'd':
        return a / b;
        break;

    default:
        printf("Invalid Value: ");
        break;
    }
}
int square2(int n)
{
    return n * n;
}
float simpleIntrest(float p, float r, float t)
{
    return (p * r * t) / 100;
}
int largest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int qube(int a)
{
    return pow(a, 3);
}
int sum(int a, int b)
{
    return a + b;
}
int diffrence(int a, int b)
{
    return a - b;
}
int getNumber()
{
    return 10;
}
void even_odd(int n)
{
    if (n % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
int square(int n)
{
    n *= n;
    printf("%d", n);
}
int table()
{
    int a = 5;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", a * i);
    }
}
void hello()
{
    printf("Hello world!\n");
}