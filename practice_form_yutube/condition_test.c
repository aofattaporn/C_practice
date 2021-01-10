#include<stdio.h>
void condition(){ 
    int age; 
    printf("\n");
    printf("==================================\n");
    printf("Enter your age :");
    scanf("%d", &age);
    if (age <= 6)
    {
        printf("free of charge.\n");
    }
    else if (age < 10)
    {
        printf("step 1.\n");
    }
    else if (age < 20)
    {
        printf("step 2.\n");
    }
    else if (age < 30)
    {
        printf("step 3.\n");
    }
    
    else
    {
        printf("you have to play\n\n");
    }

}
int combination() { 
    printf("\n");
    printf("==================================\n");
    int sum; 
    int x = 0;
    printf("How many do you want to add :");
    scanf("%d", &sum);
    for(int item = 1; item <= sum; item = item + 1) 
    { 
        printf("%d\n", item);
        x = x + item ;
    }
    return x;
    
}
int rextangle_star(int w, int h) { 
    int area = w * h; 
    return area;
}

void star(int w, int h){ 
    for (int item = 0; item < h; item++)
    {
        for (int item2 = 0; item2 < w; item2++)
        {
            printf("*");

        }
        printf("\n");
    }  
}

int main() { 

    // rectangle area -> star 
    printf("=============RECTANGLE FOR STAR==================\n");
    int w, h;
    printf("Enter widht :");
    scanf("%d", &w);
    printf("Enter hight :");
    scanf("%d", &h);
    printf("rectangle area : %d\n", rextangle_star(w, h));
    star(w, h);
    printf("\n");


}