#define EOF 0
/*conta caracteres na entrada*/
main(){
    long nc;

    nc = 0;
    while (getchar() != EOF)
    {
        ++nc;
        printf("%ld\n", nc);
    }
}