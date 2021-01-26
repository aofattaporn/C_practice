#include<stdio.h> 
#include<math.h>

void star(int num) { 
    for (int item = 0; item <= num; item++)
    {
        for (int item2 = 0; item2 < item; item2++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int item = 1; item <= num - 1; item++)
    {
       for (int item2 = num - 1; item2 >= item; item2--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    

}
int main() { 
    int num;
    printf("Enter max number :"); 
    scanf("%d", &num);
    star(num);
}