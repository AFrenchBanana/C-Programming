/**
 * @file lol.c
 * @brief A simple word guessing game.
 *
 * This program allows the user to guess a word by entering letters. The user has a limited number of tries
 * to guess the word correctly. The program provides feedback on the number of tries left and displays the
 * guessed letters. If the user guesses the word correctly within the given number of tries, a congratulatory
 * message is displayed. Otherwise, a message indicating that the user ran out of tries is shown along with
 * the correct word.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_TRIES 6
#define MAX_WORD_LENGTH 100

/**
 * @brief Converts a string to lowercase.
 *
 * This function takes a string as input and converts all the characters to lowercase.
 *
 * @param str The string to be converted.
 * @return The converted string.
 */
char* strlwr(char* str) {
    unsigned char* p = (unsigned char*)str; // Create a pointer to the input string

    while (*p != '\0') { // Iterate until the end of the string
        *p = tolower((unsigned char)*p); // Convert the character to lowercase using the tolower() function
        p++; // Move the pointer to the next character
    }

    return str; // Return the converted string
}

int main() {
    char word[MAX_WORD_LENGTH]; // The word to be guessed
    char guessed[MAX_WORD_LENGTH]; // The letters guessed by the user
    int tries = 0; // Number of tries made by the user
    int wordLength; // Length of the word
    int i, j, found; // Loop variables

    printf("Enter the word to guess: ");
    scanf("%s", word); // Read the word from the user

    wordLength = strlen(word); // Calculate the length of the word

    for (i = 0; i < wordLength; i++) {
        guessed[i] = '_'; // Initialize the guessed array with underscores
    }
    guessed[wordLength] = '\0'; // Null-terminate the guessed array

    while (tries < MAX_TRIES && strcmp(strlwr(word), strlwr(guessed)) != 0) {
        printf("\nWord: %s\n", guessed); // Display the guessed letters
        printf("Tries left: %d\n", MAX_TRIES - tries); // Display the number of tries left

        char guess;
        printf("Enter a letter: ");
        scanf(" %c", &guess); // Read a letter from the user
        guess = tolower((unsigned char)guess); // Convert the letter to lowercase

        found = 0;
        for (i = 0; i < wordLength; i++) {
            if (tolower((unsigned char)word[i]) == guess) { // Check if the guessed letter matches any letter in the word
                guessed[i] = word[i]; // Update the guessed array with the correct letter
                found = 1; // Set found flag to true
            }
        }

        if (!found) {
            tries++; // Increment the number of tries
            printf("Incorrect guess!\n"); // Display incorrect guess message
        }
    }

    if (strcmp(strlwr(word), strlwr(guessed)) == 0) {
        printf("\nCongratulations! You guessed the word: %s\n", word); // Display congratulatory message
    } else {
        printf("\nSorry, you ran out of tries. The word was: %s\n", word); // Display the correct word
    }

    return 0;
}
