#include <stdio.h>
int main(){
    int a;
    printf("%p\n", &a);
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("%d",a);
    int *p= &a;
    printf("%d",*(&p));

    return 0;
}