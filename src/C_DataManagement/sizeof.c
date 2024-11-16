#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMBER_OF_ELEMENTS 50


int main(int argc , char *argv[])
{

//printf("%d\n", sizeof(int));
int a=5;//4 byte

int arr[50] = {3, 9, 10};// -> int* = 4, 4*3=12 byte

int* arrp = arr;

//printf("%zu\n", sizeof(arr)/sizeof(int)); // --> i can use it to discover the size of an array
// the operator is going to result a size_t type which value is 8 bytes
printf("%d\n", sizeof(sizeof(int)));


return 0;

}
