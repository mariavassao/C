#include <stdio.h>
#define MAXLINHA 1000

int lelinha(char s[], int lim);
void copia(char s1[], char s2[]);

int main(){
    int tam, max;
    char linha[MAXLINHA];
    char guarda[MAXLINHA];

    max=0;
    while ((tam=lelinha(linha,MAXLINHA)) > 0)
    {
        if (tam>max)
        {
            max = tam;
            copia(linha,guarda);
        }
        if (max>0)
        {
            printf("%s", guarda); 
        }
    }    
    return 0;
}

int lelinha(char s[], int lim){
    int c, i;
    for (i = 0; i < lim -1 &&(c=getchar())!= EOF && c !='\n'; i++)
    {
        s[i]=c;
        if (c == '\n')
        {
            s[i]=c;
            ++i;
        }
    }
     s[i]='\0'; 
    return i;
}

void copia(char s1[], char s2[]){
    int i=0;
    while ((s2[i] = s1[i]) !='\0')
    {
        ++i;
    }
}