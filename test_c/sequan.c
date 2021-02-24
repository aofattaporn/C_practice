#include<stdio.h> 
#include<string.h>

int main() { 
    int num, num2; 
    // printf("num :");
    // scanf("%d", &num);

    char set[10];

    printf("input : ");
    scanf("%[^\n]s", set);
    char num[]={};



    // printf("%s", set);
    for (int i = 0; set[i] != '\0'; i += 2)
    {
        printf("%c\n", set[i]);
        for (int j = 0; j < 10; j++)
        {
            num[0] = set[i];
        }
    }

   
    
}