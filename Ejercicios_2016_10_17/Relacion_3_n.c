#include <stdio.h>

    main()
    {
        int s=0,n,cuadrado;

        for (n=0; n<=19; n++)
        {
            cuadrado = n * n;
            s = s + cuadrado;
        }

            printf("\nSuma %d",s);

    return(0);
    }

