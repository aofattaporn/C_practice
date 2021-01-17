#include<stdio.h>

int main() { 
int h[2]; // h[0], h[1]
h[0] = 170; 
h[1] = 165;

double avg = 0.0; 
double sum = 0.0; 
for (int i = 0; i < 2; i++) { 
    sum += h[i];
}
avg = sum / 2.0;
printf(" avg (loop_for way) : %.2f\n", avg); 
printf(" avg (nomal way) : %.2f\n", ( h[0] + h[1] ) /2.0);

}