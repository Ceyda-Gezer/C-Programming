#include <stdio.h>
#include <stdlib.h>

/* Write the C code that adds two matrices with the same number of rows and columns.
Matrix values will be entered form the keyboard. */

int main(int argc, char *argv[]) {
	
	int matrix1[250][250],matrix2[250][250],result[250][250];
    int rows,cols,i,j;

    printf("Please enter the number of rows of the matrices: ");
    scanf("%d",&rows);
    
    printf("Please enter the number of cols of the matrices: ");
    scanf("%d",&cols);
    

    // Input first matrix 
    
    printf("Please enter the elements of the matrix1:\n");
      
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++){
        	
            scanf("%d",&matrix1[i][j]);
        }
    }
            
	// Input second matrix
	
	printf("Please enter the element of the matrix2:\n");
	
	for (i=0;i<rows;i++){
		for (j=0;j<cols;j++){
			
			scanf("%d",&matrix2[i][j]);
		}
	}

    // Add the matrices
    
    printf("Resultant Matrix:\n");
    
    for (i=0;i<rows;i++){
        for (j=0;j<cols;j++) {
        	
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
	return 0;
}
