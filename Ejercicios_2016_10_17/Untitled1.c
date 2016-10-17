#include <stdio.h>
#include <math.h>
    main()
    {
        int i,s=0,cont=0;

        for (i=0; i<=19; i++)
        {
            cont = cont + i;
            s = s + cont;
        }



            printf("\nSuma => %d",s);

        return(0);
    }

