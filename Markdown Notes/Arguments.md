* Pass an argument through the command line. 
```c
#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("Program name: %s\n", argv[0]);
	if argc > 1
		{
			printf("First arg: %s\n", argv[1]);
		}
}
```

```shell
./a.out name
```
### Executing other programs 
```c
#include <stdlib.h> /provides system()

system("ls"); // This will work on Linux and POwershell but not CMD
## Print out the version of GCC
int gccResult = system("gcc --version")
```