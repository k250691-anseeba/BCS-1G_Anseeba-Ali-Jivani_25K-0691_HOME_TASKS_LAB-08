#include <stdio.h>

int main(){
	
	int i, j, count=0;
	int cinema[3][3] = {{1,0,1},{0,0,1},{1,1,0}};
	
	printf("Following are the available seats in the cinema\n\n");
	for (i=0 ; i<3 ; i++){
    	for(j=0 ; j<3 ; j++){
    		if(cinema[i][j] == 0){
    			count++;
    			printf("%d) Row %d Seat # %d\n", i+1, i+1, j+1);
			}
        }
    }
    printf("\n\nThe total count of empty seats available are: %d\n\n", count);
    
    return 0;
}


