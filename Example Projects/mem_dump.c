#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned char byte;

/**
 * This program demonstrates memory dumping using the memcpy function.
 * It creates an array of integers, allocates memory dynamically, and copies the array into the allocated memory.
 * Then, it iterates over the memory block and prints the memory address, integer value, and corresponding character.
 */
int main() {
    int data[] = {65, 66, 67, 01, 256};

    int * start = (int *)malloc(sizeof(int) * 5);
    
    memcpy(start, data, sizeof(data));


    // Iterate over the memory block
    for (byte *loc = (byte *)start; loc < (byte *)(start + sizeof(data)); loc++) {
        printf("Memory Address: %p, Integer Value: %d, Character: %c\n", loc, *loc, (char)*loc);
    }
    
    free(start);
    
    return 0;

}
