#include<stdio.h> 
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

char playerShape() { 
    char shape; 
    printf("[r]ock, [p]aper, [s]cissore, \nplayer : ");
    scanf("%c", &shape); 

    return tolower(shape);

}
int computerShape() { 
    int r; 
    char s[] = {'r', 'p', 's'};
    return tolower(s[rand() % 3]);
}
int main() { 
    //seed number; 
    srand(time(NULL));
    printf("%c\n", computerShape());

    playerShape();

    char player, computer;
    player = playerShape();
    computer = computerShape();
    
    if (player == 'r' && computer == 's') 
        {
        printf("you won. \n");
        }
    else if (player == 's' && computer == 'p')
    {
        printf("you won. \n");
    }
    else if (player == 'p' && computer == 'r')
    {
        printf("you won. \n");
    }
    else if (player == computer)
    {
        printf("ดิว. \n");
    }
    else
    {
        printf("you lose. \n");
    }
    
    
    
 

}