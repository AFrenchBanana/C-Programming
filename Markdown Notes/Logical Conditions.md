## If
```c
if (condition){
	do; 
}
```
### Conditions
```c
//explicit zero condition
if (number >= 25){}
else{}
// simple zero check
if (number){} // number is not zero
else {}
// Not operator
if (!number){} // number is zero 
else{}
```
## Order of evaluation
* If `exp1` is false there is no point in checking `exp2`. This can save time and resources.
```c
exp1 && exp2
```
* If `exp1` is true there's no point in in testing `exp2`
```c
exp1 || exp2
```

* You should avoid de-referencing a a null pointer
* This will cause a segmentation fault. As such you should run a check on this with order of evaluation. 
```c
void* pInputBuffer = "Some Data" // no data in this pointer as its void

if (pInputBuffer !=0){ // check to make sure there is data in the pointer
	if (*pInputBuffer .....){}
}
// alternate ways 
if (pInputBuffer != 0 && *pInputBuffer...){}
```
## Switch 
* Prevents against lots of If statements
* Matching technique for the variable to `case: x` 
```c 
int cmdID = "some Command"

switch (cmdID)
{
	case 1: // if cmdID == 1
	{
		do something;
		break
	}
	case 2:
	{
		do something;
		break
	}
	case 3:
	default
	{
		// do the default
		break; 
	}
}




```