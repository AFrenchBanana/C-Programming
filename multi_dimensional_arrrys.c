#include <stdio.h>

/* As memory is contigous the 2 memory locations are 4 bytes along 
as each integer is 4bytes.*/

int main(void){ 

    int twoDdata[2][5]= {
                    {10,20,30,40,50},
                    {60,70,80,90,100}
                    };
    printf("Data is %d", twoDdata[0][0]);
    printf(" and the address is %p\n", &twoDdata[0][0]);
    printf("Data is %d", twoDdata[0][1]);
    printf(" and the address is %p\n", &twoDdata[0][1]);
    printf("Data is %d", twoDdata[0][4]);
    printf(" and the address is %p\n", &twoDdata[0][4]);
    printf("Data is %d", twoDdata[1][0]);
    printf(" and the address is %p\n", &twoDdata[1][0]);

