#include <stdio.h>

/**
 * Converts Celsius to Fahrenheit.
 *
 * @param c The temperature in Celsius.
 * @return The temperature in Fahrenheit.
 */
float c_to_f(float);

int main (void){
    float cel = 110.0f;
    float fah = c_to_f(cel); //function call

    printf("%.2f c is %2.f F\n", cel, fah);

    return 0;  
}

/**
 * Converts Celsius to Fahrenheit.
 *
 * @param c The temperature in Celsius.
 * @return The temperature in Fahrenheit.
 */
float c_to_f(float c){
    return c * 9.0f/5.0f + 32;
}