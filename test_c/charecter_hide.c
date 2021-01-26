#include<stdio.h> 
#include<string.h>

int main() { 
    char test[] = {'a', 'b','c','d', 'e'};
    int start_num = test[0];
    int last_num = (sizeof(test) ) + 96;
    for (int i = start_num; i <= last_num; i++)
    {
        if (i != test[i-97])
        {
            printf(" %c\n", i);
            break;
        }
    }
}