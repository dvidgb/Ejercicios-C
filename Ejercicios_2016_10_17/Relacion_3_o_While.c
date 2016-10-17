#include <stdio.h>
    main()
    {
        int N,i=1,P=0,acu=1;

                printf("\Introducce un numero entero: ");
                scanf("%d",&N);


                while (i <= N)
                    {
                        P = P + i;
                        acu = acu * i;
                        i++;
                    }

                    printf("\nProducto: %d",acu);
        return(0);
    }
