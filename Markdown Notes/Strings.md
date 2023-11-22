* The end of a string is indicated by a null-terminator `/0`
* The only way to determine the end of a string to reach chars until the `\0`
## String Comparing
* Cant compare variables as these are arrays, when you call an array you get a memory address. 
* As such you need to use a function such as string compare `strcmp`
```c
if (strcmp(SECRET, buffer) == 0) {
	printf("Password is correct\n");
} else {
	printf("Password is incorrect\n");
}
```
## Strings - Access
* Both strings and arrays are just pointers, and can be manipulated the same way. 
```c
data[] = {10,20,30,40,50}
/*
Data[0] is the first memory address. i.e = 1024. 
Data[1] is memory address + [i] * byte size
So Data [1] is 1024 + 1 * 4
Data[1] is 1028
*/
```
