    /* fahr -> fahr*/
    main(){
        int inicio, fim, incr;
        float fahr, cels;

        inicio = 0; /*limite inferior da tabela*/
        fim = 300; /* limite superior*/
        incr = 20; /*incremento*/

        fahr = inicio;
        printf("CONVERSAO\n");
        while (fahr <= fim)
        {
            cels = (5.0/9.0) * (fahr - 32.0);
            printf("%4.0f %6.1f\n", fahr, cels);
            fahr = fahr + incr;

        }
    }
