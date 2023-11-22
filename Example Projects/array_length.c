#include <stdio.h>
#include <string.h>

/**
 * This program demonstrates how to calculate the number of elements in an array.
 * It initializes a character array and then calculates the number of elements in it.
 * Finally, it prints the number of elements and each element of the array.
 */
int main(void)
{
    char stringarray[] = "Characters";

    /* This works out the elements in an array, 
    Diving the size off all of the array by the size of one element.
    This give us the total number of elements */
    printf("Number of elements in stringarray: %ld\n", sizeof(stringarray)/sizeof(stringarray[0]));

    printf("String array is: \n");
    for (int i=0; i<sizeof(stringarray); i++){ 
        printf("%c\n", stringarray[i]);
    }

}