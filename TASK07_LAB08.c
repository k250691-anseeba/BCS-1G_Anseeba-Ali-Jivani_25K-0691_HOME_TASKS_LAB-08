#include <stdio.h>

int main() {
	
    int i, j;

    for (i=0 ; i<5 ; i++) {

        //stars
        for (j=1 ; j<=(2*(5-i)) ; j++){
            printf(" ");
		}
        for (j = 1; j<=((2*i)+1) ; j++){
            printf("* ");
		}
	    for (j=1 ; j<=((5 - i)*2) ; j++){    
            printf(" ");
		}
        printf("| ");

    	
        //numbers
        for (j=1 ; j<=(2*(5-i)) ; j++){
            printf(" ");
		}
        for (j=1 ; j<=((2*i)+1) ; j++){
            printf("%d ", j);
		}
        for (j=1 ; j<=((5 - i)*2) ; j++){    
            printf(" ");
		}
        printf("| ");


        //letters
        for (j=1 ; j<=(2*(5-i)) ; j++){
            printf(" ");
		}
        for (j=1 ; j<=((2*i)+1) ; j++){
            printf("%c ", 'A' + j - 1);
		}
		for (j=1 ; j<=((5 - i)*2) ; j++){    
            printf(" ");
		}
        

        printf("\n");
    }

    return 0;
}

