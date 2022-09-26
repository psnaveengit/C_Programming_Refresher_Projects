/*Arrays



*/

#include<stdio.h>

int main()
{
    int num[10];
    int count = 10;
    int sum =0;
    for(int i = 0; i<count; i++)
    {   
        printf("Enter 10 numn\n");
        scanf("%d", &num[i]);
        sum = sum + num[i];
    }
    printf("\n sum: %d", sum);
    return 0;
}