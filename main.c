#include <stdio.h>
#include <stdlib.h>

int main()
{
    int trees=0,i, j,m ,n;
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

    //cristmas tree created
    int spaces = 0;
    int stars = 0;
    int k =0, j=0;
    for (i = 0 , spaces = trees, stars = -1; i <= trees; i++, stars += 2, spaces-- ){
        for (j =0; j < spaces; j++){
            printf(" ");
        }

        for (k = 0; k < stars; i++ ){
            printf("*");
        }

        printf("\n");
    }

    // create penek
    for (i = 0; i < trees - 1; i++){
        printf(" ");
    }

    printf("*\n");
    }
   return 0;
}
