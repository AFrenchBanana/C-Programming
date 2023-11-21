#include <stdio.h>

//prototype
float c_to_f(float);

int main (void){
    float cel = 110.0f;
    float fah = c_to_f(cel); //function call

    printf("%.2f c is %2.f F\n", cel, fah);

    return 0;  
}

// defintion
float c_to_f(float c){
    return c * 9.0f/5.0f + 32;
}