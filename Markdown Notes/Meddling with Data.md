## Casting
* Values often need converting between types, whether explicitly or implicitly. 
* Putting a type name in brackets before a value/ variable will `cast` it to that type.
```c
//creates an int and assign it to a long
int someInt = 5;
long longNumber = someInt; //implicit conversion
//Above is fine, casting from for 4bytes to 8Bytes number
int shortNumber = (int)longerNumber;
//Above may not be fine, casting from 8Bytes to 4Bytes.

int charValue = 'a';
// The Char 'a' and '97' are the same vlue.
```
## Type Modifiers
* Declarations can have their behaviour modified through keywords.
* Keyword `const` makes that variable un-modifiable (constant).
* Key word static is usually used in conjunction with const for global variables.  
```c
// Port Number can never change
const short portNum = 1234;
// This will cause a compilation error
portNum = 1235; 
// But you can copy this to a non-const variable
short modifiablePort = portNum;
```

## Boolean
```
int main(void)
{
	int num = 10;
	int result = (num >= 10);
	print("Result is %d", result);

	 return 0;	
}
```
* In C 0 = False, anything else is True.

* Can include `<stdboolh>`
```c
#include <stdio.h>
#include <stdbool.h>

int main (void){
	bool a = true;
	bool b = false;
	
	if (a == b){
		printf("True\n");
	} else {
		printf("False\n");
	}
	printf("True = %d\n", a);
	printf("False = %d\n", b);
	return 0;
}
```
