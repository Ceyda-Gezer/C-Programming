#include <stdio.h>


/* Write the function that finds how many vowels are in the word sent by user.*/


void sesli_harf(char str[],int boyut){
	int i,k=0; 
	
	
	for(i=0;str[i]!='\0';i++){ 
	
		if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' || str[i]=='U' ||str[i]== 'u'){
			k++;
		}
		
	}
	printf("%d",k);
}

int main(){
	char str[150];
	
	printf("Write your sentence:");
	gets(str);
	sesli_harf(str,150);
	
	return 0;
}





