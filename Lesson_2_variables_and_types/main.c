#include<stdio.h>
#include<stdbool.h>

/*
Let's learn how to declare and use variables in C and what types can they have. Pay close attention for that knowledge will come in handy later.
*/

void main(void) {
    // Firstly, you need to declare a variable. It is done by writing its type and name. 
    // It is important becuase the compiler needs to know how big the thing the user wants to store is. 
    
    int number;
    // Then, you can assign a value to it.
    number = 5;
    
    // 'int' is a used for integers ('long' for bigger numbers)
    // 'float' is used for floating-point numbers ('double' for bigger ones)

    // You can also both declare and assign in one expression.
    float second_number = 4.0;

    // You are free to update its value as many times you want.
    // Print statement can also use a value of a variable and print it to standard output. The '%d" is a placeholder and the function takes a second argument as well, the variable to print out.
    printf("the value of 'number': %d\n", number);
    number = 10;
    printf("now the value is: %d\n", number);

    // You can use char for storing individual letters
    char letter = 'A';

    // You can also store strings of characters. Notice the use of double quotes.
    // For now, ignore the confusing syntax, all you need to know is that the number in the brackets tells the compiler, how many characters will the string have
    char word[6] = "Hello";

    printf("%s World!", word);

    // We can also use boolean variables, but they have to be imported. Notice the 'include<stdbool.h>' in the header of the file
    // We have 'true' and 'false' 
    // Alternative is to use numbers instead:
    // C interprets 0 as false and any other value as true. It is more memory efficient, but less intuitive for the reader, so I strongly recommend sticking to bools.
    bool is_sky_blue = true;

    

    return;
}