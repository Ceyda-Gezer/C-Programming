#include <stdio.h>
#include <stdlib.h>

/* Write a C program to sort a given array using Bubble Sort. */

void BubbleSort(int array[],int n){
	
	int i,j,temp;
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(array[j] >array[j+1]){
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
			
		}
	}
}

int main(int argc, char *argv[]) {
	
	int array[5]={37,21,43,98,65};
	int i,n=5;
	
	BubbleSort(array,n);
	
	printf("The sorted array:");
	
	for(i=0;i<5;i++){
		printf("%d ",array[i]);
	}




	return 0;
}
