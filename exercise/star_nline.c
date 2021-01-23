#include<stdio.h> 
#include<math.h>


void star_lin(int nline) { 
    for (int i = 1; i <= nline; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void star_line_return(int nline) { 
    for(int i = 1; i <= ceil(nline / 2); i++) { 
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i <= nline / 2; i++)
    {
        for (int j = nline / 2; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
void num_pyramid(int nline) { 
    for (int i = 1; i <= ceil(nline / 2)+1 ; i++)
    {
        for (size_t j = 1; j < i+1; j++)
        {
            
            printf("%zu", j);
        }
        printf("\n");
        
    }
    
    for (int i = (nline / 2); i >= 1 ; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        
    }
    
}

int main() { 
    int nline;
    printf("Enter your line :");
    scanf("%d", &nline);
    // star_lin(nline);
    // star_line_return(nline);
    num_pyramid(nline);

}