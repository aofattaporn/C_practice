#include<stdio.h> 
#include<string.h>

void demo_str() { 
    char *str = "rainbow";
    printf("str :%s\n", str);
    printf("str :|%10s|\n", str);   // padding-left
    printf("str :|%-10s|\n", str); // padding-right

    printf("str :|%.4s|\n", str); // 4 charecter
    printf("str :|%.*s|\n", 4, str); // 4 charecter
}
void demo_addr() { 
    int i =10; 
    printf("i = %d (%p)\n", i, &i);
    char *str = "rainbow"; 
    char str2[] = "sunday";
    printf("str = %s (%p)\n", str, str);
    printf("str2 = %s (%p)\n", str2, str2);
    for (int i = 0; i < strlen(str2); ++i) { 
        printf("str2[%d] = %c (%p)\n", i, str2[i], &str2[i]);
    }
}
int main() { 
    demo_str();
    demo_addr();

    
}