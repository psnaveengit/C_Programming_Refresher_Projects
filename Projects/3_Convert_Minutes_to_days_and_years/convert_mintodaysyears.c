/*
WAP to convert number of minutes to days & years
1. Program should ask to enter minutes
2. Display as output the minutes and its equivalent in years and days
3. Variables 
    a. minutes (int)
    b. minutes in year (double)
    c. Years (double)
    d. Days (double)


Research

1 day = 24 hours = 24*60 minutes = 1440 minutes
1 year = 365 days = 365*1440 = 525600 minutes
ex: 2045 minutes input
out: 
2045/525600 = 0.0038907914764079 years
in days = 0.0038907914764079*365 = 1.420138888888889 days


 
*/



#include <stdio.h> 
#include <stdbool.h>
#include <math.h>

int main()
{

    int minutes;
    double minutes_in_years;
    double years;
    double days;

    printf("Enter the minutes: ");
    scanf("%d", &minutes);
    printf("\nEntered minutes is: %d", minutes);
    minutes_in_years = 365*24*60;
    printf("\nNumber of minutes in a year is: %lf", minutes_in_years);

    years = ((double)minutes)/(525600); //type conversion is must
    printf("\n Given minutes in year is: %lf", years);

    days = ((double)years) * 365;//type conversion is must
    printf("\n Given minutes in days is: %lf", days);

    return 0;
}