#include <stdio.h>

int main() {
    int i, j;

    for (i=1 ; i<6; i++) {
    	//stars
        for (j=1; j <=5-i ; j++)
            printf("  "); 
        for (j = 1; j<=i; j++)
            printf("* ");
        
        printf("   |   "); 

        //numbers
        for (j = 1; j<6-i; j++)
            printf("  ");
        for (j = 1; j<=i; j++)
            printf("%d ", j);
        
        printf("   |   "); 

        //letters
        for (j=1 ; j<6-i ; j++)
            printf("  ");
        for (j=1 ; j<=i; j++)
            printf("%c ", 'A' + j - 1);

        printf("\n");
    }

    return 0;
}

