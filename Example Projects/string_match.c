#include <stdio.h>
#include <string.h>
#define SECRET "MySecretPassword"


int main(void){

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