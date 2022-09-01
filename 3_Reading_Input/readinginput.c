#include<stdio.h>

int main()
{
    char name[100];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your Name is %s \n", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your Age is  %d \n", age);
    return 0;

    /* NOTE

    scanf works only with 1 word. No space or return key is detected 
    
    double x - ("%lf",&x)

    */
}