/**
 * @file loops.c
 * @brief This file contains examples of different types of loops in C.
 */

#include <stdio.h>
#include <stdbool.h>

int main() {

    // you don't need braces around the loop if there is only one line of code
    for (int i=0; i<5; i++)
        puts("Hello There");
    
    // multiple lines need braces, can also increment in multiple steps 
    for (int i=0; i<10; i+=2) {
        puts("Hello There");
        puts("General Kenobi");
    }
    
    // can also go down in counts
    for (int i=10; i>0; i-=2) {
        puts("General Kenobi");
        puts("Hello There");
    }
    
    // can add other operators in the for loop. 
    bool stop = false;
    for(int i=0; i<10 && !stop; i++) {
        printf("%d\n", i);
        if (i==4) {
            stop = true;
        }
    }

    // do-while loop
    int num;
    do {
        printf("Enter a number between 1 and 10: ");
        scanf("%d", &num);
        if (num < 1 || num > 10) {
            printf("Invalid number\n");
        }
    } while (num < 1 || num > 10);
    puts("Well done!, you are smart");

    // while loop 
    while (true) {
        printf("Enter a number between 5 and 50: ");
        scanf("%d", &num);
        if (num < 5 || num > 50) {
            printf("Invalid Number!\n");
        } else {
            printf("Well Done, Clever Cloggs\n");
            break;
        }
    }
 

    return 0;
}
