#include <stdio.h>

 int main(){
    int c;
    int esp, tab, nlinha;
    esp =0;
    tab=0;
    nlinha=0;

    while ((c=getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (c == ' '){
                esp++;
            }
            if(c == '\t'){
                tab++;
            }
            if (c == '\n')
            {
                nlinha++;
            }           
        }
    }
    printf("%d\n %d\n %d\n", esp, tab, nlinha);
}



