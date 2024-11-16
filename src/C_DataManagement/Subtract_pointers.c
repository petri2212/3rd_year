#include <stdio.h>
#include <stdlib.h>


int main(int argc , char *argv[])
{
//64 bit
long long a = 15;// its a stack when i initialie variable
long long b = 20;

long long c[] = {1,2,3};

//long long * p = c + 1; //points to the first, every time i add 1 i add 8 tu a byte. get address of c and add 1 times sizeof(type of c)
                        // -1 get random adress, we cant multiply or divide

//long long * p = &a - &b; // ci lascia sottrarre ma il modo non è giusto
//printf("Result is %lld at address %p\n", *p, p);
char d= 'a';

long long result = &a - &b;// their difference in memory divided by sizeof(their type)

printf("Result is %lld with adress %p and %p\n", result, &a,&b);//result is 1 

long long* p = malloc(sizeof(long long));
long long* q = malloc(sizeof(long long));

long long result1 = p - q; //16 bit between each others
printf("Result is %lld with adress %p and %p\n", result1, p, q );


return 0;
}


