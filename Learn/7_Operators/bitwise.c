
/* bitwise operator are &, | - not && or ||

Bitwise operators are used to test & set individual bits 
in and integer variable

Every Binary has Decimal conversion

256 128 64 32 16 8 4 2 1   
------------------------
0    0   1  1 0  1 0 0 1 - decimal 105

*/
#include<stdio.h>
#include <stdbool.h>

int main()
{
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;

    result = a & b;
    /* 0011 1100 &
       0000 1101
       ---------
       0000 1100 - decimal answer is 12
    */
    printf("result is %d",result);


    return 0;
}