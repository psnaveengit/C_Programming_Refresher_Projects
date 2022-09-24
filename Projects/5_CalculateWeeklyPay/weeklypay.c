/*
WAP that calculates weekly pay
1. Ask user to input number of hours worked in a week
2. Output gross pay, taxe, and net pay
3. Assumptions
    a. Basic Pay rate - $12.00/hr
    b. Overtime in excess of 40 = 1.5x
    c. Tax Rate - 15% for first 300. 20% for next 150 and 25% for rest

4. Use if else


*/


#include <stdio.h> 
#include <stdbool.h>
#include <math.h>

//void tax_netpay (totalpay, tax);
int main()
{
    double workhours;
    double totalpay;
    double tax;
    double netpay;

    printf("Weekly Pay Calculator\n");
    printf("----------------------\n");
    printf("Enter the number of hours worked: ");
    scanf("%lf", &workhours);
    printf("\nYou have entered: %lf", workhours);
    double workstandard = 40;
    
    if (workhours<=workstandard)
    {
        totalpay = 12.00 * workhours;
        printf("\nGross Pay: %lf", totalpay);
        if(totalpay<=300.00)
        {
            tax = 0.15*totalpay;
            printf("\nTax: %lf", tax);
            printf("\nNetpay: %lf", (totalpay-tax));
        }
        if(totalpay<=450)
            {
                tax = (0.15*300) + (0.20 * (totalpay-300));
                printf("\nTax: %lf", tax);
                printf("\nNetpay: %lf", (totalpay-tax));

            }
        else
            {
                tax = (0.15*300) + (0.20*150) + (0.25*(totalpay-450));
                printf("\nTax: %lf", tax);
                printf("\nNetpay: %lf", (totalpay-tax));
            }
    }
    if(workhours>workstandard)
    {
        totalpay = 12.00*40 + ((workhours-40)*(12.00*1.5));
        printf("\nGross Pay: %lf", totalpay);
        if(totalpay<=450)
            {
                tax = (0.15*300) + (0.20 * (totalpay-300));
                printf("\nTax: %lf", tax);
                printf("\nNetpay: %lf", (totalpay-tax));

            }
        else
            {
                tax = (0.15*300) + (0.20*150) + (0.25*(totalpay-450));
                printf("\nTax: %lf", tax);
                printf("\nNetpay: %lf", (totalpay-tax));
            }
    }
     return 0;
}
/*void tax_netpay (totalpay, tax)
{
    if(totalpay<=450)
    {
        tax = (0.15*300) + (0.20 * (totalpay-300));
        printf("\nTax: %lf", tax);
        printf("\nNetpay: %lf", (totalpay-tax));

    }
    else
    {
        tax = (0.15*300) + (0.20*150) + (0.25*(totalpay-450));
        printf("\nTax: %lf", tax);
        printf("\nNetpay: %lf", (totalpay-tax));
    }

}
   
*/
