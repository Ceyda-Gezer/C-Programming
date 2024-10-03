#include <stdio.h>
#include <stdlib.h>

/* Find the average of an array which has 8 numbers. */

int main(int argc, char *argv[]) {
	
	
	float a[8],sum,avg,k;
	int i;
	sum=0.0;
	
	printf("Please enter your array");
	
	for(i=0;i<8;i++){
		scanf("%f",&a[i]);
		
	}
	
	for(i=0;i<8;i++){
		sum=sum+a[i];
		
	}
	
	avg=sum/8;
	printf("%f",avg);
	
	return 0;
}
