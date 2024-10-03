#include <stdio.h>
#include <stdlib.h>

/* Write a program in C language that transfers the height and weight values of 10 students in a class to a two-dimensional array by 
reading them from the keyboard and calculates the average height and weight values and prints them on the screen.*/


int main(int argc, char *argv[]) {
    int i,j;
    float matrix[10][2]; // Two-dimensional array to store heights and weights
    float height,weight,sum_height=0,sum_weight=0;


    printf("Please enter the heights of the students:\n");
    for(i=0;i<10;i++){
        scanf("%f",&height);
        matrix[i][0]=height; // Store height in the first col of the matrix
        sum_height+=height; 
    }

    printf("Please enter the weights of the students:\n");
    for(i=0;i<10;i++) {
        scanf("%f",&weight);
        matrix[i][1]=weight; // Store weight in the second col of the matrix
        sum_weight+=weight;
    }


    printf("Height Weight\n");
    for(i=0;i<10;i++){
        printf("%.2f  %.2f\n", matrix[i][0], matrix[i][1]);
    }

    float avg_height=sum_height/10; // Calculate average height
    float avg_weight=sum_weight/10; // Calculate average weight

    printf("Average height:%.2f\n",avg_height);
    printf("Average weight:%.2f\n",avg_weight);

    return 0;
}

