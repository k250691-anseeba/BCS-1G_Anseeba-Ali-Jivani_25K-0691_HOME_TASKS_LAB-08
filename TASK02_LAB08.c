#include <stdio.h>

int main(){
	
	int i, j;
	int album[2][12] = {{12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15},
                        {10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16}};	
    
    for (i=0 ; i<2 ; i++){
    	for(j=0 ; j<12 ; j++){
    		printf("Year %d,   Month %d:",  i+1, j+1);
    		//for space allignment
    		if(j < 9){
    			printf(" ");
			}
			printf("%4d  photos\n", album[i][j]);
		}
	}
	
	return 0;
}


