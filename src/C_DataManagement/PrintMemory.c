#include <stdio.h>
#include <stdlib.h>



typedef struct{
    int test; //4
    char k; //4
    char str[10]; //10
    int *p; //8--> in teoria dovrebbe pesare otto ma a me pesa 4 non riesco a capire perche'
   // int *c;
    short sh; //2 --> 00 01 little endian --> 01 00 --> o exadecimal 1*16^2
                                            //0000 0001 0000 0000 2^8
                                            //00 40 --> 
                                            //0000 0000 0100 0000

}Thing;

int main(int argc , char *argv[])
{
    int i;
   // int c;
    Thing t = {
        12, 'k', "testing", &i, 256
    };
    printf("%lu\n", sizeof(t));

    unsigned char data;

    for(i = 0; i < sizeof(t); i++){
        if (i % 4 == 0){
         printf("\n");
        }

        data = *(((unsigned char*)&t) + i) ; //devo convertirlo in un caratteere per farci la somma, questo  mi permette di 
                                            // selezionare ogni posizione della struttura poi la punto e trovo quello che ci è dentro nel nostro caso dei Byte
        printf("%02x ", data);
    }
    //windows is reversed, so MSB is the last one ecc
    //gli zero in piu praticamente sono aggiunti dal compilatore per tenere in ordine certe cose ed essere piu veloce
printf("\n");
for(i = 0; i < sizeof(t); i++){
        if (i % 4 == 0){
         printf("\n");
        }

        data = *(((unsigned char*)&t) + i) ; 
        printf("%03hhu ", data);// decimale 
    }

    printf("\n");
for(i = 0; i < sizeof(t); i++){
        if (i % 4 == 0){
         printf("\n");
        }

        data = *(((unsigned char*)&t) + i) ; 
        printf("%c ", data);// caratteri
    }

    return 0;

}



