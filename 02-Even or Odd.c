#include <stdio.h>
#include <stdlib.h>

/* Determine the output whether number N is even or odd */

int main(int argc, char *argv[]) {
	
	int	num;
	
	printf("Enter the number:");
	scanf("%d",&num);
	
	if (num>=0){
		if (num%2==0){
			printf("This number is even");
			}
			else if (num%2!=0){
				printf("This number is odd");
				}
	}
				
	return 0;
}
