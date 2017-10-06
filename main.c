#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trees,i, j,m ,n,z;
    printf("Input number : ");
    scanf ("%d",&trees);

    if (trees<0){
            printf("Bad number -");
            exit ;
            }
    else {
   // ступеньки вниз  по возрастающей
    for(i = 0; i <= trees; i++){
        for(j = 0; j <= trees; j++){
            if(i > j )
            printf("*");

        }
        printf("\n");
    }
    printf("\n");
    //ступеньки вниз  по убывающей
         for(n = 0; n <= trees; n++){
         for(m = 0; m <= trees; m++){
            if(n < m )
            printf("*");
        }
        printf("\n");
        }
        //elka
        for (i = trees; i <= trees; i++) {
        for (j = 0; j <= i; j++) {
            if (j == i) {
                for( z = 0; z <=trees - j - 1; z++) {
                   printf(" ");
                }
                printf(" ");
            } else {
                for(z = 0; z <= trees - j; z++) {
                    printf(" ");
                }
            }
            for(z = 0; z <= 2 * j; z++) {
                printf("*");
            }
            if (j == i) {
                 printf(" ");
            }
           printf("\n");
        }
       //  printf("*");
         //

         //
        }
   }
   return 0;
}
