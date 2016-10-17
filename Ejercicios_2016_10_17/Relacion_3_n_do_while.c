#include <stdio.h>

    main()
    {
        int s=0;
        int n=0,cuadrado;

            do{
                cuadrado = n * n;
                s = s + cuadrado;
                n++;

        }while (n<=19);

            printf("\nSuma: %d",s);

    return(0);
    }


