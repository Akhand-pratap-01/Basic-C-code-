#include <stdio.h>
// polnedrom nom like 121
int main(void)
{
    int n, i, result = 0;
    printf("Enter a number :");
    scanf("%d", &n);
    int temp = n;
    while (temp > 0)
    {
        i = temp % 10;
        result = result * 10 + i;
        temp /= 10;
    }
    if (n == result)
    {
        printf("polendrom");
    }
    else
    {
        printf("not a polendrom");
    }
    return 0;
}
