#include <stdio.h>
    main()
    {
        int i=1,N,A=0,B=1,C;

        printf("\nIntroduce un numero entero => ");
        scanf("%d",&N);

            do
            {
                C = A + B;
                A = B;
                B = C;
                i++;
            printf("%d\n",C);
            }while (i<=N);


        return(0);
    }

