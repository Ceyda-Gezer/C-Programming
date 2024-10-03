#include <stdio.h>
#include <stdlib.h>

/* Write a C program for computing factorial N (N!) */

int main(int argc, char *argv[]) {
	int num,counter,fac;
	
	printf("Please enter the number:");
	scanf("%d",&num);
	
	counter=1;
	
	while(counter<num){
		fac=counter*num;
		counter=counter+1;		
	}
	
	printf("%d",fac);
	
	
	return 0;
}
