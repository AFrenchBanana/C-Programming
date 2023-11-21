#include <stdio.h>
#include <string.h>

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