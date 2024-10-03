#include <stdio.h>
#include <stdlib.h>

/* Write a C program that prints how many character of "a" included in the each word of a string entered from keyboard.
(Note:It is assumed that all the characters of the input string is lowecase letters.)*/


int main(int argc, char *argv[]) {
	
	char str[250];
	int i,c=0;
	
	
	printf("Please enter your string:");
	gets (str);  
	
	
	for (i=0;str[i]!='\0';i++){ 
		if(str[i]=='a'){
			c++;
		}
		
	}
	printf("%d",c);
	
	return 0;
}
