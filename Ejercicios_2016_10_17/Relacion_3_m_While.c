#include <stdio.h>
    main()
    {
        int i=1,N,A=0,B=1,C;

        printf("\nIntroduce un numero entero => ");
        scanf("%d",&N);

            while (i<=N)
            {
                C = A + B;
                A = B;
                B = C;
                i++;
            printf("%d\n",C);
            }


        return(0);
    }

