#include <stdio.h>

void hello(void);
void password(char *, void(*)(void));    


int main() {
    char pwd[10];
    password(pwd, hello);
    printf("Password is: %s\n", pwd);
    return 0;
}

void hello(void){
    printf("Hello World!\t");
}

void password(char * p, void(* msg)(void)) {
    msg();
    printf("Enter Password: ");
    scanf("%s", p);
}
