#include<stdio.h> 
void ternary1() { 
    int a = 10, b = 27;
    int max;
    max = a>b ? a : b;
    printf("max : %d\n", max);
}
int ternary2(int a, int b){
    return a > b ? a : b;
}
void ternary3() { 
    printf("================USE TERNARY OPERATION===================\n");
    int age = 10; 
    int ticket;
    // if (age < 5 || age >60) { 
    //     ticket = 0 ;
    // } else
    // {
    //      ticket = 50;
    // }
    // ternart operator 
    ticket = age < 5 || age > 50 ? 0 : 50; // ส้วนแรกเป็น condition หลัง ? เป็น True : False
    ticket = age < 5 || age > 50 ? printf("ticket = 0") : printf("ticket = 50"); 
    printf("ticket : %d\n", ticket);
    printf("\n");
}

void switch_demo() { 
    printf("================USE SWITCH CASE===================\n");

    // เหมากับ เงื่อนไขที่เป็นค่าหนึ่งค่า ไม่เป็นช่วง 
    // เงื่อนไขต้องเป็น int หรือ char ไม่เป็นช่วง
    char d; 
    printf("1. [m]ocha\n");
    printf("2. [l]atte\n");
    printf("3. [e]spresso\n");
    printf("4. [c]cappushino\n");
    printf("plese select a menu :");
    // scanf("%c", &d);
    switch ('c'){
        case 'm' :
        case '1' :
            printf("40\n");
            break;
        case 'l' :
        case '2' :

            printf("30\n");
            break;
        case 'e' :
        case '3' :
            printf("20\n");
            break;
        case 'c' :
        case '4' :
            printf("50\n");
            break;
        default: 
        printf("please select a valid menu.\n");
    
    }
    printf("\n");
}

void loop_repeat(){ 
    printf("================USE FOR LOOP===================\n");
    int count;
    // i++ (post implement)
    // ++i (pre inplement)
    for (int i = 10; i >= 1; i--)
    {
       printf("%d\t", i);
    }
    printf("\n\n");
    
}

void convert_ounces() { 
    printf("================USE FOR LOOP OUNCES===================\n");
    float ounces = 28.3495;  
    for(int item = 1; item <= 10 ; item++) { 
        printf("%2d ounces = %8.4f grams\n", item, item*ounces);
    }
}

void calculator() { 
    printf("================USE FOR LOOP CALCULATOR===================\n");
    for (int num = 1; num <= 12; num++) {
        for (int num_step = 1; num_step <= 6; num_step++)
        {
            printf("%2d x %2d = %3d     ", num_step, num, num*num_step );
        }
        printf("\n");
    
    
}
}


int main(){ 
    
    printf("\n");
    ternary3();
    switch_demo();
    loop_repeat();
    convert_ounces();
    calculator();
}