#include <stdio.h>

int main() {
    int sum = 0, arr[]={1,3,4,5,6};
    for (int i = 0; i < sizeof arr/sizeof arr[0]; i++)
    {
        sum += arr[i];
    }
    printf("SUM : %d\n", sum);
    printf("AVERAGE is : %.2f\n", sum/5.0);

    return 0;
}