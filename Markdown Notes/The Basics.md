```c
#include <stdio.h> 

int main(void) {
	printf("Hello World!");
	return 0;
}
```

* `#include <stdio.h>` 
	* `#` = pre-processor directories (CPP)
	* `< >` = is in the standard import location, if this was `""` these could be anywhere.
	* `stdio.h` = header file. In this case standard input/output
	
* `int main(void){`
	* Function
	* main is the entry point. 
	* Functions are made up: 
		return type + function name + (args)
* `printf("Hello World!");`
	* General rule: single character = single quote, multiple characters = double quote
	* `printf('a');` 
	* `printf("ab");`


```python
age = int(input("Enter Age:"))
print(age)
```

```c
int age;
```
* Make an automatic variable in the stack 
```c
scanf("%d",&age);
```
* Receive input from standard in
* `%d` = type of input, format specifier. 
	* `%d` means denary integer (base10)
* `&` = address off  
* `age` = variable
* scan in a variable from STDIN and store it as a denary integer in the variable age. 
```c
printf("age is %d",age)
```
* [List of format specifiers](https://www.tutorialspoint.com/format-specifiers-in-c)
## Key Terms
* **Declarations** create a named variable
```c
int num1;
```
* **Assignment**
```c
num1 = 10;
```
* **Expressions** perform some operations
	* Often several in the same line
	* You can specify with brackets, again like maths 
```c
num2 = num1 + 10; 
// Other ways to do this:
num1 += 10;
num1 ++; 
```
* **Variables** have a type and a value
	* Numbers that represent a letter, symbol or address etc...
```c
#include <stdio.h> 

int main(void) {
	int a; 
	a = 65; 
	b = a;
	printf("A = %s/n", a);
	printf("B= %d/n", b);
	return 0;
}
```
These variables are the same, its the string formatting that shows how it is displayed
```shell
./a.out
A = A
B = 65
```
* **Comments**
```c
// single line

/*
Multi Line
*/
```

