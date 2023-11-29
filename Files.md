* In Linux file descriptors (FD) are just a number that identifies some system entity. 
* In Windows, the WIN32 API uses custom type such as 'HANDLE' to refer to files or a custom type for other items such as Sockets. 
	* These are typedefs of basics like int. 
	* Similar to FDs but as generic
* Streams are represented with the keyword `FILE`.
	* must be closed with `fclose`
## Generic File functions 
```c
//file get string
fgets
//file put string
fputs
//read bytes
fread
//write bytes
fwrite
```