#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Demonstrates dynamic memory allocation using malloc.
 * 
 * This program allocates memory on the heap using malloc and performs
 * operations on the allocated memory. It showcases the usage of pointers
 * and memory management functions like malloc and free.
 * 
 * @return 0 on successful execution.
 */
int main() {    
    // allocate some memory on the heap
    int * iptr = (int*)malloc(sizeof(int)*5);
    printf("iptr = %p\n", iptr);
    // copy original pointer to have a reference to the original memory
    int * newptr = iptr;

    *newptr = 10;

    newptr++;

    *newptr = 20;

    printf("%d\n%d\n", *iptr, iptr[1]); 

    free(iptr);
    return 0;
}
