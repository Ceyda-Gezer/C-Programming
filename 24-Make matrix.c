#include <stdio.h>
#include <stdlib.h>

/* Write the C code to make matrix: 1 2 3 
                                    4 5 6
							        7 8 9
									5 9 8 */

int main(int argc, char *argv[]) {
	
	int i,j;
	int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{5,9,8}};
	
	
	for(i=0;i<4;i++){
		
		for(j=0;j<3;j++){
			
			printf("%d ",matrix[i][j]);  // We put ' ' after %d 
		}
		printf("\n");
	}
	return 0;
}
