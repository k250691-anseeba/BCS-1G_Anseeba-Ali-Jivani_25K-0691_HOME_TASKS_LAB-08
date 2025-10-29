# include <stdio.h>

int main(){
	
	//3 rows represent 3 classes and each of the columns represnt each student's score.
	int score[3][4] = {{85, 92, 78, 90},{88, 76, 95, 84},{90, 85, 88, 92}};
	int sum = 0;
	int i, j;
	float avg;
	
	printf("Scores:\n\n");
	for(i=0 ; i<3 ; i++){
		printf("Class %d: ",i+1);
		for(j=0 ; j<4 ; j++){
			printf("%4d" , score[i][j]);
        }
        printf("\n");
    }
	
	printf("\n\n");

	for(i=0 ; i<3 ; i++){
		for(j=0 ; j<4 ; j++){
			sum = sum + score[i][j];
			if(j=3){
				avg=sum/4;
				printf("THE AVERAGE FOR CLASS %d IS: %.2f", i+1, avg);
			}	
		}
		printf("\n");
	}
	
	return 0;
}

