#include <stdio.h>

int main() {
    int num = 5 , fact= 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("%d", fact);
    
    return 0;
}