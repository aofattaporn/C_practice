#include<stdio.h> 
int main(){ 
    printf("\n");

    int hight, width;
    printf("DIFFERENCE DIVISION OF TYPE DATA\n");
    printf("1 / 2 = %d\n", (1 / 2));      //integer หารกันได้เป็นผลลัพธ์ ไม่คิดเศษ 
    printf("1.0 / 2 = %f\n", (2.0/2));    // หากต้องการผลลัพธ์ที่เป็น float ให้สักตัวเป็น  ดสนฟะ

    printf("\n");
    printf("Enter height :");
    scanf("%d", &hight);
    printf("Enter width :");
    scanf("%d", &width);

    float area ; // => when assign area is float 
    int area2;
    area = 0.5 * width * hight; // I must to know type of area 
    area2 = 0.5 * width * hight; // I must to know type of area 
    printf("area :%f\n", area);
    printf("area :%d\n\n", area2);


}