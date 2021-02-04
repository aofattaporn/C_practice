#include<stdio.h> 

int main() { 
    for(int i =0; i < 9; i++){ 
        for (int j = 0; j < 9; j++)
        {
            
            if (i == j || j + i == 9 || i == 0 || j == 9)
            {
                printf("*");
            }
            else { 
                printf(" ");
            }
            
        }

        printf("\n");
    }
}