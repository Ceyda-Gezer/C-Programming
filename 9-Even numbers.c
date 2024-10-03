#include <stdio.h>
#include <stdlib.h>

/* Write a C program which generates even numbers between 1000 and 2000 and then prints them */

int main(int argc, char *argv[]) {
	
	int n;
	
	n=1002;
	while(n<2000){
		printf("%d\n",n);
		n=n+2;	
	}
	
	return 0;
}
