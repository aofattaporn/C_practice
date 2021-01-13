#include<stdio.h> 
#include<string.h>

void az() { 
    for(char c = 'A'; c <= 'z'; ++c) {
        printf("%c ", c);
    }

}
void ROT_13() { 
    char s[] = "HELLOWORLD"; 
    for (int i = 0; i < strlen(s); ++i) {
        if(s[i] >= 'A' && s[i] <= 'M'){
            printf("%c => %c \n", s[i], s[i] + 13);
            } 
        else {
            printf("%c => %c \n", s[i], s[i] - 13);
            }
    }
    
    
}


// int main() {
//     // charecter define by single cote
//     char c1 = 'A';
//     char c2 = 'A' + 2;
//     printf("%c  %d\n", c1, c1);
//     printf("%c \n", c2);

//     ROT_13();

//     // az(); 
// }