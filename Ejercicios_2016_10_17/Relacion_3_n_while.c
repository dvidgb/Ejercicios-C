#include <stdio.h>
    main()
    {
        int n=0,cuadrado,s=0;


        while (n <= 19)
        {
            cuadrado = n * n;
            s = s + cuadrado;
            n++;
        }

            printf("\nSuma: %d",s);

    return(0);
    }

