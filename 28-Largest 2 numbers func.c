#include <stdio.h>

/* The 10-element integer array will be sent to a function by entering values from the keyboard .
Write a function that finds the largest 2 numbers in the array and prints it to the screen. */

void comparray(int a[ ],int boyut){
	int i;
	int max1=0,max2=0;
	
	for (i=0;i<boyut;i++){
		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2 && a[i]!=max1){
			max2=a[i];
		}
	}
	printf("Biggest number:%d\n",max1);
	printf("2. biggest number:%d\n",max2);
}

int main (void){
	
	int a[10];
	int i;
	
	
	printf("Please enter your array:\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}	
	comparray(a,10);
	return 0;
}


