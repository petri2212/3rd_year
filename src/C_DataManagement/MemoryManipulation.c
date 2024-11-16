#include <stdio.h>
#include <stdlib.h>
#include <string.h> //memory manipulation and comparison from this library



int main(int argc , char *argv[])
{
/*

int arr1[] = {1, 2}; //0001
short int arr2[] = {1, 2};//0102

if(memcmp(arr1, arr2, 2 * sizeof(short int)) == 0)  //2 elements * the size of the type
{
    printf("Array are the same\n");
}else{
    printf("Array are not the same\n");
}
*/


/*
int arr1[] = {3, 4}; 
int arr2[] = {1, 2};

memcpy(arr1, arr2, 2* sizeof(int));

printf("%d %d\n", arr1[0], arr2[0]);
*/
/*
int arr1[] = {3, 4}; 
int arr2[] = {1, 2};

memset(arr1, 1 , 2 * sizeof(int)); //set evry byte to a constant, number of byte set is declared in the 3rd scope
                                   //if i put 1 set every single byte to 1 so its enormous
printf("%d %d\n", arr1[0], arr1[0]);

printf("%08x %08x\n", arr1[0], arr1[0]);
*/

int arr1[] = {3, 4}; // 0003 0004
int arr2[] = {1, 2};
 

if(memchr(arr2, 1 , sizeof(int)*2) != NULL)  //size of, how many bytes to search for
                                           //return a pointer to the byte 
                                           //return null if he didnt found the number
{
    printf("Found the byte\n");
}else{
    printf("Did not found The byte\n");
}


return 0;
}