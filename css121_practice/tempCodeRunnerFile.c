#include<stdio.h> 

int main() { 
    int w, h;
    double bmi; 
    printf("Input weight (kg.) :"); 
    scanf("%d", &w); 
    printf("Input height (m.) :");
    scanf("%d", &h); 

    bmi = w/(h*h);
    printf("\nBMI : %.2f\n", bmi);



}