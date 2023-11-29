#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Added missing import

char* open_file(void);
void append_file(char* text);

int main() {
    char * block = open_file();
    printf("%s\n", block);
    free(block);
    char text[100];
    printf("What do you want to write to the file?");
    fgets(text, 100, stdin); 
    append_file(text);
    block = open_file();
    printf("%s\n", block);
    free(block);
    return 0;
}

char* open_file(void){
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    char myString[100];
    fgets(myString, 100, fptr);
    fclose(fptr);
    char * myStringPointer = (char*)malloc(sizeof(char) * (strlen(myString) + 1)); // Allocate memory for the string
    strcpy(myStringPointer, myString); // Copy the string into the allocated memory
    return myStringPointer;
}

void append_file(char* text){
    FILE *fptr;
    fptr = fopen("file.txt", "a");
    fprintf(fptr, "%s", text);
    fclose(fptr);
}