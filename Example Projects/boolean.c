#include <stdio.h>
#include <stdbool.h>

int main (void){

    bool a = true;
    bool b = false; 

    if (a == b){
        printf("True\n");
    } else {
        printf("False\n");
    }
    printf("True = %d\n", a);
    printf("False = %d\n", b);

    return 0;  
}
