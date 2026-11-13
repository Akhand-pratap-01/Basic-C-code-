#include <stdio.h>
// functions 
void larg_of_three(int a , int b , int c);
void even_or_odd(int a);
int sum(int a);
void prime(int a);
int rev(int a);
int square(int n);
void largest(int a , int b);
int fact(int n);
int rec_fact(int n);

int main() {
    prime(67);
    sum(10);
    even_or_odd(6);
    larg_of_three(4 , 5 , 8);
    rev(1234);
    printf("%d\n" , rec_fact(5));
    square(5);
    return 0 ; 
}
int rec_fact(int n){
    if (n == 0){
        return 1;
    }
    return n * rec_fact (n - 1);
}
int fact(int n){
    int sum = 1;
    for (int i =1 ; i <= n ; i++){
        sum *= i;
    }
    printf("%d fact is\n" , sum);
}
void largest(int a , int b){
    if (a > b){
        printf("A is biggest\n");
    } else {
        printf("B is biggest.\n");
    }
}

int square(int n){
    n*=n;
    printf("%d\n", n);
}
int rev(int a){
    int rev = 0 , rem;
    int text = a;

    
    while (text > 0 ){
        rem = text % 10;
        rev = rev * 10 + rem;
        text = text/10;
    }
    printf("%d rev num is\n ", rev);
    return 0;
   
    
}
void prime(int a){
    int count = 0 ;
    for (int i = 1 ; i < a ; i++){
        if(a % i == 0){
            count++;
        }
    }
    if (count == 2){
        printf("Prime\n");
    } else {
        printf("NOT Prime\n");
    }
}
void even_or_odd(int a){
    
    if (a % 2 == 0 ){
            printf("Its a Even num\n");
        
    } else{
            printf("Its not a Even num\n");
    }
}
int sum(int a ){
    int add = 0;
    for (int i = 1 ; i <= a ; i++){
        add = add + i;
    }
    printf("%d\n", add);
}

void larg_of_three(int a , int b , int c){
    
    
    if(a > b && a > c) {
        printf("A is bigger");
    } else if (b > a && b > c) {
    
       printf("B is bigger\n");
    } else {
        printf("C is bigger\n");

    }    
}