

#include<stdio.h>
#include <stdbool.h> //Add this for boolian

int main()
{
    int a = 20;
    int b = 10;
    int c;

    c = a + b;
    printf("Sum is %d",c);

    c = a - b;
    printf("\n Diff is %d",c);

    c = a * b;
    printf("\n Mul is %d",c);

    c = a/b;
    printf("\n Div is %d",c);

    c = a%b;
    printf("\n Rem is %d",c);

    c = a++;
    printf("\n Post Increment a=20 is %d",c);//Post Increment means first use orginal value then change

    c = ++b;
    printf("\n Post Increment b=10 is %d",c);//Pre Increment means first change and then use

    bool T = true;
    bool F = false;
    bool result;

    result = T && F;
    printf("\nT && F = %d", result);

    result = T || F;
    printf("\nT || F = %d", result);

    result = !result;
    printf("\n!result = %d", result);

    a = 20;
    b = 10;
    c = 0;

    c += a; //c = c+a;
    printf("\n  c += a is (0+20 = 20) %d",c);

    c -= b; //c = c-a;
    printf("\n  c -= b is (20-10 = 10) %d",c);

    c *= a; //c = c*a;
    printf("\n  c *= a is (10*2) %d",c);

    return 0;
}