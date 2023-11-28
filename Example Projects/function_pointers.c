#include <stdio.h>

float c_to_f(float);
float f_to_c(float);


float temp;
int main() {
    
    float (*tempptr)(float); // pointer to a function 
    tempptr = c_to_f; // assign the address of the function to the pointer
    printf("What Temp?: ");
    scanf("%f", &temp);
    printf("Celcius = %.2f\n", (tempptr(temp)));
    tempptr = f_to_c; // assign the address of the function to the pointer
    printf("Farhenheit = %.2f\n", (tempptr(temp)));

    
    return 0;
}
float (c_to_f)(float celsius){
    return (celsius * 9/5.0f) + 32;
}

float (f_to_c)(float farhenheit){
    return (farhenheit - 32) * 5/9.0f;    
}

