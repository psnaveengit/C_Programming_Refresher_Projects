#include<stdio.h>

int main()
{
    
    
    enum gender {male, female}; //definition

    enum gender myGender; //Declired

    myGender = male;

    enum gender anotherGender;

    anotherGender = female;

    char myChar = 'N';
    printf("%c", myChar);
    return 0;
}

/*NOTE

int - any numbers without decimal
float - decimal number 
double - same as float but can hold larger number - 64 bits
char - 
_Bool/bool - bool is an alias for _Bool - on or off - 1 or 0


C offers three adjectives to make new data types

short, long, unsigned

short int uses less storage than int

ENUM Datatype & Char Datatype

Enum allows a programmer to define a variable and specify the valid values that could 
be stored into it

for example "myColor" & only store primary colors and not anything else

enum primaryColor {red, yellow, blue};

enum month {January, February,....,Decemeber};

"" - string
'' - char

Escape Characters


*/