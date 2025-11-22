#define EOF 0

/*copia entrada na saida*/

main(){
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    };
}