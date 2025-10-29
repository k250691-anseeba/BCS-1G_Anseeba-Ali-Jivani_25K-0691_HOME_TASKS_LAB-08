#include <stdio.h>

int main(){
	
	int i, j;
	int sensor[4][4] = {{12, 15, 10, 9},{11, 8, 12, 13},{14, 13, 9, 7},{16, 11, 10, 8}};
	
	printf("Grid of Temperatures (%cC):\n", 248);
	for (i=0 ; i<4 ; i++){
    	for(j=0 ; j<4 ; j++){
    		printf("%4d  ", sensor[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nFollowing are the cold spots found: \n");
	for (i=0 ; i<4 ; i++){
    	for(j=0 ; j<4 ; j++){
    		if(sensor[i][j]<sensor[i][j+1] && sensor[i][j]<sensor[i][j-1] && sensor[i][j]<sensor[i-1][j] && sensor[i][j]<sensor[i+1][j]){
    		printf(" - At position (%d, %d) with temperature %d%cC\n", i+1, j+1, sensor[i][j], 248);
        	}
		}
	}
	
	return 0;
}
