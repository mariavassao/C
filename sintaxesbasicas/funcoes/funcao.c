#include <stdio.h>

void cumprimenta(char, char);

int main(){
    char primeiro, segundo;

    printf("Entre com duas incicais:");
    primeiro = getchar();
    segundo = getchar();
    cumprimenta(primeiro,segundo);
}
    void cumprimenta(char inic1, char inic2)
        {
            printf("ola, %c%c!\n", inic1, inic2);
        }

