/*

WAP to display byte size of basic data types. It depends on the 
system running the program.

sizeof()

1. int
2. char
3. long
4. long long
5. double
6. long double

%zd - format specifier

*/


#include <stdio.h> 
#include <stdbool.h>
#include <math.h>

int main()
{
    printf("size of int %zd\n", sizeof(int));
    printf("size of char %zd\n", sizeof(char));
    printf("size of long %zd\n", sizeof(long));
    printf("size of long long %zd\n", sizeof(long long));
    printf("size of double %zd\n", sizeof(double));
    printf("size of long double %zd\n", sizeof(long double));

    return 0;
}