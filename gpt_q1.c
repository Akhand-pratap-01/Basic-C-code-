// #include <stdio.h>

// int main() {
//     int a, b;
//     printf("Enter First Number: ");
//     scanf("%d", &a);
//     printf("Enter Second Number: ");
//     scanf("%d", &b);
//     printf("HERE is your sum : %d", a+b);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int a, b;
//     printf("Enter First Number: ");
//     scanf("%d", &a);
//     printf("Enter Second Number: ");
//     scanf("%d", &b);
//     printf("HERE is your sum : %d", a+b);
//     printf("HERE is your sub : %d", a-b);
//     printf("HERE is your mul : %d", a*b);
//     printf("HERE is your div : %d", a/b);
//     printf("HERE is your mod : %d", a%b);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int l, b;
//     printf("Enter First Number: ");
//     scanf("%d", &l);
//     printf("Enter Second Number: ");
//     scanf("%d", &b);
//     printf("Here is your area: %d " , l*b);
//     return 0;
// }
// // F = (C × 9/5) + 32
// #include <stdio.h>

// int main() {
//     int c;
//     printf("Enter your c value: ");
//     scanf("%d", &c);
//     float f = (c * 1.8)+32.0;
//     printf("Your F is : %.2f", f);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int a = 10 , b = 12, temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("A is %d B is %d", a , b);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int a = 10 , b = 12;
//     a = a+b;
//     b = a -b;
//     a = a-b;
//     printf("a is : %d b is : %d", a , b);
//     return 0;
// }
// // SI = (P × R × T)/100

// #include <stdio.h>

// int main() {
//     int p, r, t;
//     printf("Enter First Number: ");
//     scanf("%d", &p);
//     printf("Enter Second Number: ");
//     scanf("%d", &r);
//     printf("Enter Third Number: ");
//     scanf("%d", &t);
//     int SI = (p*r*t)/100;
//     printf("Your SI is : %d", SI);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//      int p, r, t , a, b ;
//     printf("Enter First Number: ");
//     scanf("%d", &p);
//     printf("Enter Second Number: ");
//     scanf("%d", &r);
//     printf("Enter Third Number: ");
//     scanf("%d", &t);
//     printf("Enter Forth Number: ");
//     scanf("%d", &a);
//     printf("Enter Fivth Number: ");
//     scanf("%d", &b);
//     printf("HERE is your Avg : %d ", (a+b+p+r+t)/5);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int a = 2323;
//     int c = a % 10;
//     printf("Last Digit is : %d", c);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int a = 4;
//     float b = 5.002;
//     float sum = b + (float) a;
//     printf("%.2f", sum);
//     return 0;
// }

// if else switch

#include <stdio.h>

int main() {
    int a;
    printf("Enter your num : ");
    scanf("%d", &a);
    if (a > 0 ){
        printf("postive");
    } else if (a == 0)
    {
        printf("VAlue is ZEro");
    } else{
        printf("Negative");
    }
    return 0;
}
#include <stdio.h>

int main() {
    int a;
    printf("Enter a Value: ");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("EVEN");
    } else{
        printf("ODD");
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int a, b ;
    printf("Enter Your values : ");
    scanf("%d %d", &a ,&b);
    if (a>b)
    {
        printf("A is bigger");
    } else if (a==b)
    {
        printf("Both Are equal");
    }
    
     else {
        printf("B is bigger");
    }
    
    return 0;
}

#include <stdio.h>

int main() {
    int a , b, c;
    printf("Enter your Numbers :");
    scanf("%d %d %d" , &a, &b, &c);
    if (a==b && b == c)
    {
        printf("Value is same");
    } else if (b>=a && b>=c)
    {
        printf("B is bigger");
    } else if (a>=b && a>=c)
    {
        printf("A is bigger");
    }
     else {
        printf("C is bigger");
    }
    
    
    return 0;
}

#include <stdio.h>

int main() {
    int a ;
    printf("Enter Your age : ");
    scanf("%d", &a);
    if (a<0)
    {
        printf("Invalid Age");
    }
    else if (a>120)
    {
        printf("Invalid Age");
    }
     else if (a >= 18 )
    {
        printf("You can vote");
    } 
     else
    {
        printf("You can't vote");
    }
    return 0;
}

#include <stdio.h>

int main() {
    int a ;
    printf("Enter Your MARKS: ");
    scanf("%d", &a);
    if (a> 100 || a < 0)
    {
        printf("INVALID VALUE");
    } else if (a>=90)
    {
        printf("A+");
    } else if (a>=80)
    {
        printf("B+");
    } else if (a>=70)
    {
        printf("C+");
    } else if (a>=60)
    {
        printf("D+");
    } else{
        printf("FAIL");
    } 
    return 0;
}
#include <stdio.h>

int main() {
    int year;
    printf("ENTER YOUR YEAR: ");
    scanf("%d",&year);
    if ((year%400 == 0 || year%4 ==0) && year%100 != 0)
    {
        printf("YOUR YEAR IS LEAP YEAR: ");
    } else
    {
        printf("Not A Leap Year");
    } 
    return 0;
}
#include <stdio.h>

int main() {
    int a , b;
    char op;
    printf("Enter your VALUES: ");
    scanf("%d %d", &a , &b);
    printf("Enter your OPrator: ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("YOUR SUM IS : %d", a+b);
        break;
    case '-':
        printf("YOUR SUB IS : %d", a-b);
        break;
    case '*':
        printf("YOUR MUL IS : %d", a*b);
        break;
    case '/':
        if (b==0)
        {
            printf("Can't Divided by Zero");
            break;
        }
        
        printf("YOUR DIV IS : %d", a/b);
        break;
    case '%':
        if (b==0)
        {
            printf("Can't Divided by Zero");
            break;
        }
        
        printf("YOUR Mod IS : %d", a%b);
        break;
    
    default:
        printf("INVALID VALUE");
        break;
    }

    return 0;
}

#include <stdio.h>

int main() {
    char c;
    printf("ENTER YOUR CHAR : ");
    scanf(" %c", &c);
    if ((c >='A' && c <= 'Z')||(c >='a' && c <= 'z') )
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
    {
        printf("Vowel");
    } else{
        printf("Consonant");
    }
    } else
    {
        printf("Enter Char value");
    }  
    return 0;
}
#include <stdio.h>

int main() {
    int unit , bill;
    printf("Enter your BILL UNIT : ");
    scanf("%d", &unit);
    if (unit < 0)
    {
        printf("Invalid Unit value");
    } else
    {
        if (unit <= 100)
    {
        bill = unit * 5;
        printf("Your bill is : %d", bill);
    } else if (unit <= 200)
    {
        bill = (100*5) + (unit - 100)*7;
        printf("Your bill is : %d", bill);
    } else
    {
        bill = (100*5) + (100*7) + (unit - 200)*10;
        printf("Your bill is : %d", bill);
    }
    }
    
    
    
    
    return 0;
}