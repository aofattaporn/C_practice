#include<stdio.h> 
int main() 
{ 
    float w = 0.0, h = 0.0;
    double bmi =0.0; 
    printf("Input weight (kg.) :"); 
    scanf("%f", &w); 
    printf("Input height (m.) :");
    scanf('%f', &h); 

    bmi = w/(h*h);
    printf("\nBMI : %.2lf", bmi);



}