#include <stdio.h>
#define Preco 1.99

int main(){
    int pera = 3;
    char qualidade ='A';
    float peso = 2.5;;

    printf("Existem %d peras de qualidade %c", pera, qualidade);
    printf("pesando %f quilos. \n", peso);
    printf("o preco por quilo é %f, total e %f\n", Preco, peso*Preco);
}