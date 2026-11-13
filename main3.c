#include <stdio.h>
// prime number
int sum(int , int);
int sum(int a , int b){
   return a+b;
}
int main(){
    int i , n, result = 0 ;
    printf("Enter a number : ");
    scanf("%d", &n);
    if (n<2){
        printf("Not prime");
    } else {
    for (i = 2; i*i < n; i++){
       if(n%i == 0){
          result++;
       }
    }
       if (result == 1){
        printf("Prime");
       } else {
        printf("Not Prime");
       }
    }
   printf("the sum is %d",sum(9,89));
    return 0;
}