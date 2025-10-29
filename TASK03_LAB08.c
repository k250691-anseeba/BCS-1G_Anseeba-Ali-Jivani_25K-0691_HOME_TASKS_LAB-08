#include <stdio.h>

int main() {
	
	int i, j, m, n, k;
    int image[4][4] = {{1, 0, 1, 0},{0, 1, 0, 1},{0, 1, 0, 1},{1, 0, 1, 0}};
    int inverted[4][4];
    int white_pixel_count = 0;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if(image[i][j] == 1){
                white_pixel_count++;
            }
            //will change 1 to 0 and 0 to 1
            inverted[i][j] = 1 - image[i][j]; 
        }
    }


    printf("  Original Image:       |    Inverted Image:\n");


    for (m=0 ; m<4 ; m++) {
        for (n=0 ; n<4; n++) {
            printf("%4d ", image[m][n]);
        }
        printf("    |   "); 
        for (k=0 ; k<4; k++) {
            printf("%4d ", inverted[m][k]);
        }
        printf("\n");
    }

    printf("\nNumber of white pixels in the original image: %d\n", white_pixel_count);

    return 0;
}
