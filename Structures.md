* Used to represent a data that is linked together. 
* Any data type of data can make up the members 
* Members all exist sequentially in memory
### Example Struct 
```c
#include <stdio.h>
#include <string.h>

typedef unsigned char byte;

struct person
{
//members
byte id; //unsigned char is 8 bits, 1 bytes, allows 0-255
char lastname[20];
float salary;
};

int main (void){
	struct person my_person;
	my_person.id = 100;
	strcpy(my_person.lastname, "F112"); //UNSAFE
	my_person.salary = 20000.0f; //f makes sure it goes to a float not a double.
	
	printf("ID is %d", my_person.id);
	printf(", Lastname is %s", my_person.lastname);
	printf(", Salary is £%.2f \n", my_person.salary);
	
	return 0;

}
```
* These structures are being made on the stack
### Array of Structures 
* Old school way
* This is not a C solution, instead a pre-processor solution
```c
#define EMPLOYEES 100 
//at the top of the file

struct person my_person[EMPLOYEES];
my_person.id = 100;
strcpy(my_person.lastname, "F112"); //UNSAFE
my_person.salary = 20000.0f; //f makes sure it goes to a float not a double.
```
* More Modern
* C solution, more likely to be found in debugging
```c
const int EMPLOYEES = 100;

struct person my_person[EMPLOYEES];
my_person.id = 100;
strcpy(my_person.lastname, "F112"); //UNSAFE
my_person.salary = 20000.0f; //f makes sure it goes to a float not a double.
```