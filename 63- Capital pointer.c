#include <stdio.h>
#include <stdlib.h>

/* Write a code that finds how many caharacters is the same with your name's capital in a string? */

int main(int argc, char *argv[]) {
	
	char *sentence;
	char capital;
	int count=0,i;
	
	printf("Please write your string:");
	
	sentence=(char*)malloc(100*sizeof(char));
	if(sentence==NULL){
		printf("Memory allocation failed.");
		return 1;
	}
	
	gets(sentence);
	
	for(i=0;sentence[i]!='\0';i++){
		
		if(sentence[i]=='c'||sentence[i]=='C'){
			count++;
		}
		
	}		
	
	printf("%d characters are the same with your capital.",count);
	
	free(sentence);
	
	return 0;
}
