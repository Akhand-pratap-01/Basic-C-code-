// finding big num in three input
#include <stdio.h>

int main() {
    int a , b, c , max;
    printf("Enter your Numbers : ");
    scanf("%d %d %d" , &a, &b, &c);
    max = a;
    if (b> max) max = b;
    if (c> max) max = c;

    if (a == b && b == c)
        printf("All values are same");

    else if (a == b || b == c || a == c){
        a == b ? printf("A : %d or B : %d is IS same", a , b):
        b == c ? printf("\n B : %d is equal to C : %d ", b,c): printf("A : %d or C : %d are Same", a , c);
    }
    else
        printf("Largest number is %d", max);
    return 0;
}