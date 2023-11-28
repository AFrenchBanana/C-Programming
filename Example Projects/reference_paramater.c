#include <stdio.h>

//prototype
void makeupper(char *);


int main() {
    char name[] = "Frank"; //create char array
    makeupper(name); //pass char array address
    printf("Upper case is: %s\n", name);

    return 0;
}


void makeupper(char * s){
    for (int i=0; i< sizeof(s); i++){
        if (s[i] >= 'a' && s[i] <= 'z') {
        s[i] = s[i] - 32;
        }
    }
}