#include <stdio.h>
#include <stdlib.h>

/* Pentagon numbers are produced according to the formula Pn = n(3n-1)/2. Print pentagon numbers less than 100 to the screen */

int main(int argc, char *argv[]) {
	
    int n,Pn;
	
    for (n=1;(Pn=n*(3*n-1)/2)<100;n++){
        printf("%d\n",Pn);
    }
	
    return 0;
}
