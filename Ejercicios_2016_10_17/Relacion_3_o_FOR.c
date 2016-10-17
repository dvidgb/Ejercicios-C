#include <stdio.h>
    main()
    {
        int N,i=1,P=0,acu=1;

                printf("\Introducce un numero entero: ");
                scanf("%d",&N);

        for (i=1; i<=N; i++)
        {
            P = P + i;
            acu = acu * i;
        }

                    printf("\nProducto: %d",acu);
        return(0);
    }

