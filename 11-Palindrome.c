#include <stdio.h>
#include <stdlib.h>

/* Write a C program to check whether a given number from keyboard is Palindrome number or not */

int main(int argc, char *argv[]) {
	int num,sum,dig,k;
	
	printf("Enter num:");
	scanf("%d",&num);
	
	k=num;
	sum=0;
	
	while(num!=0){
		dig=num%10;
		num=num/10;
		sum=(sum*10)+dig;
		}
	
	if(k=sum){
		printf("Palindrome");
		
	}
	else if(k!=sum){
		printf("Not Panlindrome");
	}
	
	return 0;
}
