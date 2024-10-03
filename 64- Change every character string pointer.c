#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write a code that changes each character in a string in C language. */

int main(int argc, char *argv[]) {
	
	char *sentence;
	char newChar;
	int i;
	
	printf("Please write your string:");
	
	sentence=(char*)malloc(100*sizeof(char));
	if(sentence==NULL){
		printf("Memory allocation failed.");
		return 1;
	}
	gets(sentence);
	
	printf("Please write new char:");
	scanf("%c",&newChar);
	
	for(i=0;sentence[i]!='\0';i++){
		if (sentence[i] != ' '){ 
            sentence[i] = newChar;
        }	
	}
	printf("Your new sentence:%s",sentence);
	
	free(sentence);
	
	return 0;
}
