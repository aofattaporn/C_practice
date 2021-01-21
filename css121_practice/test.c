#include<stdio.h>
int main()
{
    int age;
    char str[10];

    
    printf("your name's :");
    scanf("%s", str);


    printf("your age :");
    scanf("%d",&age);

    if (age <= 20)
    {
        printf(" %d pass\n",age);
    }
    else
    {
        printf(" %d false\n",age);
    }
    return 0;
}