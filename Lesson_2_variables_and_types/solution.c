#include<stdio.h>
#include<stdbool.h>

void main(void) {
    // int type is used for storing numbers
    int minutes_in_an_hour = 60;
    
    // 3.14 is floating-point number, it needs to be stored in a float or a double.
    // Dont't forget the semicolon!
    float PI = 3.14;

    // A character should be stored in a char.
    // this would work with int as well, but only becuase of the way characters are represented in C. You will learn about it later, don't worry.
    char first_letter = 'A';

    // Strings store some text in double quotes
    // Again, semicolon!
    char first_month[8] = "January";

    return;
}