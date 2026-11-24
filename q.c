// // Even or Odd
// #include <stdio.h>

// int main() {
//     printf("Enter your No. : ");
//     int a ;
//     scanf("%d", &a);
//     a % 2 == 0 ? printf("Even"): printf("ODD");
//     return 0;
// }

// // Finding Factorial
// #include <stdio.h>

// int main() {
//     int n , fact = 1;
//     printf("Enter : ");
//     scanf("%d", &n);
//     if ( n < 0) {
//         printf("Factorial Don't Exit");
//     } else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             fact *= i;
//         }
        
//         printf("%d", fact);
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int n = 123 , c,x ;
    // x = n;
    for (int i = 0; i < 3; i++)
    {
        c = n %10;
        printf("%d", c);
        n /= 10;
    }
    
    return 0;
}