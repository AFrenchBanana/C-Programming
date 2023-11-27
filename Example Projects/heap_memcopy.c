#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief This program demonstrates the usage of dynamic memory allocation and memcpy function.
 * It creates an array of floating-point temperatures on the stack, then allocates memory on the heap
 * to store a copy of the temperatures using memcpy. Finally, it prints the temperatures from both the stack and the heap.
 * 
 * @return 0 on successful execution
 */
int main() {
    // Array of temperatures on the stack
    float temps[] = {10.2, 4.5, 6.6, 4.5, 2.3, 1.34, 7.8, 10.1, 20.2};

    // Allocate memory on the heap to store a copy of the temperatures
    float *iptr = (float*)malloc(sizeof(float) * (sizeof(temps) / sizeof(temps[0])));
    float *newptr = iptr;

    // Print the temperatures from the stack
    for (int i = 0; i < (sizeof(temps) / sizeof(temps[0])); i++) {
        printf("Stack Temp %d is: %.1f\n", i, temps[i]);
    }

    // Copy the temperatures from the stack to the heap using memcpy
    if (iptr) {
        memcpy(iptr, &temps, sizeof(temps));
    }

    // Print the temperatures from the heap
    for (int i = 0; i < (sizeof(temps) / sizeof(temps[0])); i++) {
        printf("Heap Temp %d is: %.1f\n", i, iptr[i]);
    }

    // Free the allocated memory
    free(iptr);

    return 0;
}
