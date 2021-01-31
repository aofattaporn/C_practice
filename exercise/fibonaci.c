#include<stdio.h>


int main() { 
    int num = 3;

    int befor = 1;
    int befor2 = 1;
    int after = 0;

    for (int i = 0; i < num; i++)
    {

        befor2 = befor;
        printf("%d ", befor);
        befor = befor + after;
        after = befor2;
    }
    
}