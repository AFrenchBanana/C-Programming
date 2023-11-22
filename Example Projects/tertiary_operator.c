/**
 * @file tertiary_operator.c
 * @brief This file demonstrates the usage of the ternary operator in C.
 */

#include <stdio.h>

/**
 * @brief Main function
 * @details This function demonstrates the usage of the ternary operator to determine if a person is allowed to have a lemonade based on their age.
 * It also calls the function myfunc to demonstrate the usage of the ternary operator in a function.
 * @return 0 on successful execution
 */
int main(void)
{
    int age = 21; 
    // tertiary operator
    printf("Allowed a lemonade? %c\n", (age >= 18 ? 'Y' : 'N'));
    // conidtion>? conidtion is true : conidtion is false

    printf("%d\n", myfunc(11));

    return 0;
}

/**
 * @brief Function to demonstrate the usage of the ternary operator
 * @param n The input number
 * @return n if n is greater than 10, otherwise 0
 */
int myfunc(int n) { 
    return (n > 10 ? n : 0);
}