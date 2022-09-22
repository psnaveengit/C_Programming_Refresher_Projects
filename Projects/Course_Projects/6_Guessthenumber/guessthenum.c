/*
WAP to guess the number
1. Program will generate a randome number from 0 to 20
2. Ask user to guess the number
3. User should be able to enter only 0 to 20
4. The program will give clue whether number is too high or low
5. The player wins if they can guess within 5 tries



*/

#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); //Use current time as seed for random generator
    int randomNum = rand() % 21; //(rand() % (upper-lower+1)) + lower;
    //printf("%d", randomNum);

    int guessnumber;

    for (int i = 5; i>0; --i)
    {
        printf("\nYou have %d tries left\n", i);
        printf("Guess a number between 0 to 20: ");
        scanf("%d", &guessnumber);
        if(guessnumber>=0 && guessnumber<=20)
        {
            if(guessnumber==randomNum)
            {
                printf("\nThe Number Guessed is correct\n");
                break;
            }
            else if(guessnumber>randomNum)
            {
                printf("The Number Guessed is higher than random num\n");
            }
            else
            {
                printf("The Number Guessed is lower than random num\n");
            }

        }
        else
        {
        printf("\nEntered number is not in range of 0-20. Enter again\n");
        }
    }
    return 0;
}
