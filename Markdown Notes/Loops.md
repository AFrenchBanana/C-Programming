* C has three keyword
* For - you no how many times to loop through 
* While - May not even run once
* Do While - always has to run once
```c
for (int itr = 0; itr < 10; itr++){ 
	/*  1. Initalise 'itr' to be zero
		2. Evaluate Condition 
			true: enter loop body
			{loop body code}
			1. At the end of the loop body, execute iteration expression
			Loop to 2L
		False: exit loop */
}

do {
	//always run this at least once
	//at the end of the loop, if condition is true, loop
} while (// condition)

while (// condition)
{
	//at start of the loop body, if "condition" is true, enter body 
}
```

## Loop Control 
```c
#include <ctype.h> 
char* pSomeString = "someString"

for (int i = 0 ; itr < 100; i++){
	if (pSomeString[i]){ //check if the value is valid, and not an null byte.
		if (isdigit(pSomeString[i])) { 
			printf("%d\n", pSomeString[itr]);

			continue; 
		}
	else 
	{
		break;
	}
	
	}
}
```

## goto 
* Direct code jump 
* **Do Not Use** 99% of the time. 
