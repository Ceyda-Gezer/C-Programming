#include <stdio.h>
#include <stdlib.h>

/*The radius of the circle must be entered by users from the keyboard and the function must be called from within the main function. 
	Function prototype: float square (const int r) 
	Pi numbers are 3.14 and must be defined as constants at the beginning of the program. 
	When printing the result screen, the fraction should be '2'.	*/


float square(const int r){
	
	float pi=3.14,area;	
	area=pi*r*r;
	
	printf("%.2f",area);
	
	return area;
}



int main(int argc, char *argv[]) {
	
	int r;
	float area;
	printf("Please enter your radius:");
	scanf("%d",&r);
	
	area=square(r);
		
	return 0;
}

