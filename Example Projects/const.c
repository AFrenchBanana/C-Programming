#include <stdio.h>
#include <stdlib.h>

void func1(const int *);
void func2(int const *);
void func3(int * const);
void func4(const int * const);

int main() {
    // Const effectively makes a variable read-only
    int num = 77;
    int * nptr = &num;
    //passing in value of num
    func1(nptr);
    func2(nptr);
    func3(nptr);
    func4(nptr);
    return 0;
}

//numptr is a pointer to a const int
void func1(const int * numptr) {
    puts("func1");
    //2 things we can change
    numptr++; //can change where the pointer is pointing to
    // (*numptr)++; De-referencing the poin//ter and changing the value, this will not work because of the const
    printf("Pointer pointing to: %p\n", numptr);
    printf("Value of pointer: %d\n", *numptr);
}

//func2 is protecting the number being pointed to, doing the same thing as func1
void func2(int const * numptr) {
    puts("func2");
    //2 things we can change
    numptr++; //can change where the pointer is pointing to
    //(*numptr)++; //De-referencing the pointer and changing the value, this will not work because of the cons
    printf("Pointer pointing to: %p\n", numptr);
    printf("Value of pointer: %d\n", *numptr);

}

//func3 is protecting the memory address of the pointer, as such as int can be changed but not the pointer
void func3(int * const numptr) {
    puts("func3");
    //2 things we can change
    //numptr++; //can change where the pointer is pointing to,  this will not work because of the const
    (*numptr)++; //De-referencing the pointer and changing the value
    printf("Pointer pointing to: %p\n", numptr);
    printf("Value of pointer: %d\n", *numptr);

}
//func4 is protecting the memory address of the pointer and the value of the pointer, so neither can be changed
void func4(const int * const numptr) {
    puts("func4");
    //2 things we can change
    //numptr++; //can change where the pointer is pointing to
    //(*numptr)++; //De-referencing the pointer and changing the value, this will not work because of the const
    printf("Pointer pointing to: %p\n", numptr);
    printf("Value of pointer: %d\n", *numptr);

}