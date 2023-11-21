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