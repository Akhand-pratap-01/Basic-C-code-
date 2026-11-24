#include <stdio.h>

int main() {
    int arr [] = {10,6,7,3,8,9};
    int min = arr[0];
    int max  = arr[0];
    for (int i = 0; i < sizeof arr / sizeof arr[0]; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
        
    }
    printf("min is %d\n", min);
    printf("max is %d\n", max);

    return 0;
}