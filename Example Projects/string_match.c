/**
 * @file string_match.c
 * @brief This program prompts the user to enter a password and checks if it matches a predefined secret password.
 *        It demonstrates the usage of the strcmp function to compare strings.
 */

#include <stdio.h>
#include <string.h>

#define SECRET "MySecretPassword"

int main(void) {
    char buffer[100];

    printf("What is the password?: ");
    scanf("%s", buffer);

    if (strcmp(SECRET, buffer) == 0) {
        printf("Password is correct\n");
    } else {
        printf("Password is incorrect\n");
    }

    return 0;
}