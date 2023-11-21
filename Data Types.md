## Basic Types 
### Numbers 
* Most generic *numbers* are represented by an "int"
	* Integers are usually 4 bytes long
* Sometimes limiting them to shorter lengths (a **short** is 2 bytes) 
```c
int number = 1;
short number = 1234;
```
### Characters 
* Char is **always** 1 byte *(ASCII)*
* No built in support for strings 
```c
char leter ='a';
```
### Arrays
* A Number of instances of the same type, accessed via a single variable name. 
```c 
char string = "This is an array";

float prices[3] = {10.1f, 34.2f, 56.7f}
```
* Strings always have `/0` at the end of the array.
	* If specifying an array of chars add +1 for the null byte.  
*  Cannot  print an array of items that is not a string. 
	* must be a loop
```c
// Lengths can be explicitly stated
short portnumbers[5] = {80, 443, 8080, 12345, 45678}
// Lengths can also inferred 
char databuffer[] = "Length of an array"
```
#### Multi-dimensional arrays
```c
int coordinates[2][10]; //ten pairs of coordinates
int threeDimensionalMatrix[100][100][100]; 
```
### Length of data
* Use sizeof to get the length of a data type
```c
short intSize = sizeof(int)
int shortSize = sizeof(int)
```
* Fix a data type size
```c
#include <stdint.h>
int32_t 32bitNumber = 1234;
// unisigned integer, cannot have positive or negative numbers. 
uint8_t oneByte = 12; 
```
## Strings
```c
char* hostname

char hostname[] ="host"; 

char hostname[] = {'h','o','s','t','\0'}
```
* Copy a new string to a new array
```c
char name[6] = 'Frank'
char name2[5] = ''
#include <string.h>
strncopy(name, "jess")
```