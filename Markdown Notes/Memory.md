## Common terms
* Buffer or Blob is some area of memory
	* `Binary Large Object`
	* used in your code via a pointer to it. 
	* Generically a void. 
* Length or size of an array in memory
	* Term `size_t` is commonly used for variables that describe the size of an area of memory in bytes. 
* Null pointer
	* invalid and must not be used. 
* Valid pointer
	* anything else, usually a large number. 
## Malloc
* Need to give it the number of bytes 
```c
int * iptr = malloc(sizeof(int)*16);
```
* Malloc will by default return a null pointer, as such you should assign a data counter to the start of the malloc.
```c
int * iptr = (int*)malloc(sizeof(int)*16);
```
* Always good to make a new pointer. This allows the first pointer to be the start and the second pointer to be moved across the arrays.
```c
int * newptr = iptr;
``` 
* Free the pointer 
	* if you don't free this it will stay on the heap, other wise you will get memory leaks.
```c
free(iptr);
```

## Initialising and Zeroing
* When allocating memory it will contain whatever was left there previously.
* Initialising newly allocated memory with zeros is standard practise.
* Freeing memory wont wipe it
```c
memset(/*malloc name pointer*/, /*fill value*/, /*how far through*/)
msmet(ptr, 0, 32);
```
## Copying Memory 
* Copy raw byte data between memory locations. 
```c
#include <string.h>
uint32_t fourByte = 1234567;
void* pBlop; //some previous allocation


//copy each byte of the unti32 into the memory
//target heap address, source address, how many bytes to copy
memcpy(pBlop, &fourByte, sizeof(fourBtye));

//alt secure method 
int memcpyErr = memcpy_s(&fourByte, sizeof(fourByte), pBlop, sizeof(fourByte));
if (memcpyErr !=0) {} //error

```

## Interpreting Memory 
* A number of bytes in memory that contains some data is often called a blob.
* You don't always know whats in the a blob of memory. 
* Interpreting memory is the act of turning a blob into a meaningful memory. 
* Reinterpreting memory can be dangerous as it realise on external knowledge. 