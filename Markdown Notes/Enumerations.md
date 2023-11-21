* Enumerations allow you to create a group of related values that you reference by name. 
* By default the entries are automatically numbered incrementally. 
	* They start at 0 
* Values can be assigned, after which automatic incrementing resumes. 
* An enumeration value is always a type of int.
```c
enum ErrorCodes
{
	error_unknown,         //value: 0
	error_badParamater,    //value: 1
	error_deadParrot = 70, //value: 70
	error_writeFailed,     //value: 71
}

/* LATER ON */

if (returncode == error_badParamter) {...}
```
