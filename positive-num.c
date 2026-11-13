#include <stdio.h>
int pos(int a[], int n);
int pos(int a[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            c++;
        }
    }
    return c;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, -6, 7, -8, 9, 10};
    printf("Positive number is : %d ", pos(a, 10));
    return 0;
}