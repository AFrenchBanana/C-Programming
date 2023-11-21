* Let you reference data instead of providing the data directly
* Faster to provider a pointer to  a large amount of data than  moving whole blocks.
* The `&` symbol is the *address of* operator
* The `*` symbol: declares a pointer or references.
* Pointers are type specific
* All of these are valid pointers
```c
int * ptr;

int* ptr;

int *ptr;
```

```c
uint16_t portNum = 1234;
//makes the pointer ptrPortNum and references to the memory address of portNum
uint16_t * ptrPortNum = &portNum;

/*Goes to *ptr, which is the memory address of portNum, this then fetches the number and sets it too the value of somethingElse */

unint16_t somethingElse = *ptrPortNum;
//something else will now = 1234
```
* C is type aware, as such it knows what the pointer data type is. As such you increment pointer you can move it across memory locations on the stack.
```c
data_ptr = &data[0]; //set pointer to the first item of the array
printf("item is %p\n", data_ptr); // print memory location of pointer location
data_ptr++; //move memory location +1
printf("item is %p\n", data_ptr);  // print memory location of second pointer loc
```

* Reference Struct with pointer
```c
struct StructureName *ptr = &StructureItem;
// both of these work
printf("%d\n", *ptr->structureItem)
printf("%d\n", (ptr).structureItem)
```