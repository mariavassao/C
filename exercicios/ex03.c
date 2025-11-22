    /* celsius -> fahr*/
    main(){
        int inicio, fim, incr;
        float fahr, cels;

        inicio = 0;
        fim = 300;
        incr = 20;
        
        cels = inicio;
        while (cels <= fim)
        {
            fahr = ((5.0/9.0) * cels) + 32.0;
            printf("%2.0f %0.0f\n", cels, fahr);
            cels = cels + incr;
        }
    }