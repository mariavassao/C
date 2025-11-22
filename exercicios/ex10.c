#include <stdio.h>
#define ESPACO ' '

 int main(){
    int c, ultimoespaco;
    
    ultimoespaco = 0;
    while ((c=getchar()) != EOF)
    {
        if(c != ESPACO){
             putchar(c);
             ultimoespaco = 0;
        }
        else{
            if(ultimoespaco == 0){
                putchar(c);
                ultimoespaco = 1;
            }
        }
    }
 }