#include <stdio.h>

int main(void){

    int data[4] = {15,20,30,40};

    // without a reference a data pointer is wild. 
    int * data_ptr; //created a pointer to a single int
    
    data_ptr = &data[0]; //set pointer to the first item of the array

    //without the reference (*) you are printing the memory address for data
    printf("item is %p\n", data_ptr);
    printf("item is %d\n", *data_ptr);

    /*as C is type aware it knows to +1 in the array, as such the ++
    moves us up to the next item in the array and the memory address moves up 1 */
    data_ptr++; 
    printf("item is %p\n", data_ptr);
    printf("item is %d\n", *data_ptr);


    return 0;
}