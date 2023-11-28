* Need a prototype at the top
```c
#include <stdio.h>
// prototype
void printClosingMsg();

int main(void) { 
	printClosingMsg();
}
void printClosingMsg()
	//function.......
```
* When using prototypes use type defs to make it look neater. 

* Consists of *return* *type*, *name and input*
```c
float c_to_f(float)
z```
* Call the function
```c
c_to_f(var)
```
* Function
```c
float c_to_f(float) {
	..........
	return
} 
```
## Function Pointers
```c
//prototype
float c_to_f(float);

float(* tempptr) (float);

tempptr = c_to_f;
```
* tempptr will now point to c_to_f