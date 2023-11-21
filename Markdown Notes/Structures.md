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
#### Alternate Way to initialise a struct
* These have to be in the same order as they were initialised 
```c
struct person my_person = {1, "F113", 2000.0f};
```

* These do not have to be in the same order 
```c
struct person my_person3 = {.lastname="F114", .id=3, .salary=250.0f};
```

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
### Struct Sizes
```c
struct person
{
byte id; // 1 byte
char lastname[20]; //20 bytes
float salary; //4 bytes
// total 25 bytes
};
```

```c
sizeof(myperson) // this will be 28 bytes
```
* Padding is added to the struct to allow everything to be aligned up on the boundary edge of the stack. 
* This may help performance. This can help prevent against CPU cycles. 
![[Pasted image 20231121113235.png]]
