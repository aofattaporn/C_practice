#include<stdio.h> 


void count_money(int money) { 
    int count; 
    int b_500, b_100, b_20, b_1000, c_10, c_5, c_1; 
    b_1000 = money/1000;
    b_500 = money/500;
    b_100 = money/100;
    b_20 = money/20;
    c_10 = money/10;
    c_5 = money/5;
    c_1 = money/1;
    printf("จำนวนแบงค์พัน : %d\nจำนวนแบงค์ห้าร้อย : %d\nจำนวนแบงค์ร้อย : %d\nจำนวนแบงค์ยี่สิบ : %d\nจำนวนเหรียญสิบ : %d\nจำนวนเหรีญห้า : %d\nจำนวนเหรียญบาท : %d\n", b_1000, b_500, b_100, b_20, c_10, c_5, c_1);


}
int main() { 
    int count;
    printf("Enter your money : "); 
    scanf("%d", &count);
    count_money(count);
    
}