#include <stdio.h>

int main(void){

    int number = 10; 

    int * ptr; //creates a pointer to an integer
    ptr = &number; // gives pointer address of the number variable

    number = 2001; // directly changes the value 
    
    //direct
    printf("Number is %d\n", number);
    //indirect
    printf("Number with pointer is %d\n", *ptr); // the asteric before gets the value from the address, rather than the address

    return 0;
}