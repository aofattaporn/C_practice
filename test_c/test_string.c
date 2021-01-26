#include<stdio.h> 
#include<ctype.h>



int main() { 
    char p[] = {};
    printf("Enter your message :"); 
    scanf("%s", p);   
    for (int i = 0; p[i] != '\0'; i++) // หาจนจบ 
    {
        if(p[i] == '-' || p[i] == '_' ) { 
            printf("%c", toupper(p[i+1]));
            i++;
        }
        else
        {
            printf("%c", (p[i]));
        }
    }
    printf("\n\n");
    
}