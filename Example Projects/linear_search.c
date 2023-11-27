/**
 * @file linear_search.c
 * @brief This program demonstrates linear search algorithm to find the index of a given number in an array.
 */

#include <stdio.h>
#include <stdbool.h>

#define QNT 15

int main() {
    int data[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5}; 
    int search = 0;
    bool found = false;

    printf("Enter a number to search for between 1 and 5: ");
    scanf("%d", &search);

    for (int i = 0; i < QNT; i++) {
        if (data[i] == search) {
            found = true;
            printf("Found %d at index %d\n", search, i);
        } else {
            printf("Checking index %d\n", i);
        }
    }

    if (!found) {
        printf("Could not find %d\n", search);
    }

    return 0;
}
