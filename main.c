#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trees,i, j,m ,n,z;
    printf("Input number : ");
    scanf ("%d",&trees);
    // Check for negative numbers and Christmas tree more than 2 characters
    if ((trees<0) || (trees<3)){
            printf("Bad number - or numbers < 2");
            exit ;
            }
    else {
   // Triangle in increasing
    for(i = 0; i <= trees; i++){
        for(j = 0; j <= trees; j++){
            if(i > j )
            printf("*");

        }
        printf("\n");
    }
    printf("\n");
    //Triangle in decreasing
         for(n = 0; n <= trees; n++){
         for(m = 0; m <= trees; m++){
            if(n < m )
            printf("*");
        }
        printf("\n");
        }
        // crism tree
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
        // penek for trees
        if (i=-1);
         while (i<=trees)
        //for (i=-1;i<=trees;i++)
            {
            if (i!=trees)
            printf(" ");
            if (i==trees)
            printf("*");
            i++;
            }
        }
        }
   return 0;
}
