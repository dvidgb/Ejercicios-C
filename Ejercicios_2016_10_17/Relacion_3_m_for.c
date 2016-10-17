#include <stdio.h>
    main()
    {
        int i,N,A=0,B=1,C;

        printf("\nIntroduce un numero entero => ");
        scanf("%d",&N);

            for (i=1; i<=N; i++)
            {
                C = A + B;
                A = B;
                B = C;
            printf("%d\n",C);
            }


        return(0);
    }
