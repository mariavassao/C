#include <stdio.h>

int main(){
    int i;

    for ( i = 0; i < 10; i++)
    {
        printf("%d %d %d\n", i, pot(2,i), pot(-3,i));
    }
}
int pot(int x, int n)
    {
        int i,p;
        p=1;
        for(i=1; i< n; ++i){
            p=p*x;
        return (p);
        }
    }