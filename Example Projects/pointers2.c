#include <stdio.h>

/* 
function prototype needs a int  

*/
void swapit(int *,int *);

int main(void){

    int a = 10;
    int b = 20; 
    // need the send in the memory address with the & symbol
    swapit(&a,&b);
    printf("a is %d", a);
    printf(", b is %d\n", b);

    return 0;
}

//function definition, need to de_reference each object with the *
void swapit(int * a_ptr,int *b_ptr) {
    int temp = *a_ptr;
    *a_ptr = *b_ptr;
    *b_ptr = temp;  
}
