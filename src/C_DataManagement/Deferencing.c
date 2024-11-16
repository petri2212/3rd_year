#include <stdio.h>

int main(int argc , char *argv[])
{
/*
int a = 16;
int* p = &a;

*p = 17;

printf("%d\n", p); //address in memory of a
printf("%d\n", *p); //looks at the memory pointing, dereferenting it and then search for an int

*/


int arr[] = {5, 12, 10};


printf("%d\n", *(arr + 1));  //arr + 1 gives me address of first pos of the element in the array, 
                            //so i deferencie it, we can make even 1 + arr, its strange cus 1[arr] 
                            //doesnt make sense but due to addition properties that function
                            // arr[1] <==> *(1+arr)
return 0;

}