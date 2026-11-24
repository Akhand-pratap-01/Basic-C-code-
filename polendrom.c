// Not correct
#include <stdio.h>

int main()
{
    int num, rem, rev = 0, t;
    printf("Enter a number : ");
    scanf("%d",&num);
    t = num;
    while (t > 0)
    {
        rem = t % 10;
        rev = rev * 10 + rem;
        t /= 10;
    }

    if (t == num)
    {
        printf("P");
    }
    else
    {
        printf("N p");
    }
    return 0;
}