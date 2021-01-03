#include<stdio.h> 
int main() { 
    printf("\n");
    float rt, r1, r2; 
    printf("Enter R1 R2 = "); 
    scanf("%f %f", &r1, &r2);
    rt =r1*r2/(r1+r2); 
    printf("RT = R1//R2 = %.2f \n\n", rt);

}