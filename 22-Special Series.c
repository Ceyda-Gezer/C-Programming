#include <stdio.h>
#include <stdlib.h>

/* Write a C program to display the sum of the series [1+x+x^2/2!+x^3/3!+...].*/ 

int main(int argc, char *argv[]) {
	
	int x,num,i,j,fac=1;
	float sum=0.0;
	
	printf("Please write the x:");
	scanf("%d",&x);
	
	printf("\nPlease enter the number of terms:");
	scanf("%d",&num);
	
		
	for (i=0;i<num;i++){
        int factorial=1;
        for (j=1;j<= i;j++){
            fac*= j;
        }
        sum+=pow(x,i)/fac;
    }

	printf("%f",sum);
	
	
	return 0;
}
