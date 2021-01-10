//commrnt 

#include<stdio.h> 
#include<math.h>
//preprocessor directive ทำงานก่อนเครื่องคอมไพล์ รวม sourc code 
// ส่งค่ามาเป็นแบบ integer -> ทำงานบน ฟังก์ชั่น main 
// this function main must to be run to first order 
int main() { 
    printf("\n");
    printf("Test-prinf\n");
    printf("Hello World\n");
    printf("don't worry be happy\n\n");

// เครื่องหมาย \n : escape sequences : เครื่องหมายพิเศษ 
// n -> new line 

// piority of operation : () pow * / + -
    
    printf("Test-operation-for-math");
    printf("5 + 3 : %d\n", 5+3);
    printf("5 - 3 : %d\n", 5-3);
    printf("5 * 3 : %d\n", 5*3);
    printf("5 / 3 : %d             => integer by integer result is the interger number (result)\n", 5/3);
    printf("5 / 3.0 : %f    => If there is any float type, It is float number  \n", 5/3.0);
    printf("5 / 3.0 : %d       => format specifier is not tru  \n", 5/3.0);
    printf("5 modolus 3.0 : %d     => modulus must to use persent-d because there have use integer by integer  \n", 5%3);

    printf("ppow(2, 3) : %f => *The pow command return is duble\n\n", pow(2, 3));


    printf("======================= Test a Type data ===========================\n");
    printf("-> use show string that have a 2 type");
    char *hero = "spiderman";
    printf("%s\n", hero);
    char coountry[] = "Thailand"; 
    printf("%s\n", coountry);



}





int demo() { 
int aof;
printf("\n");
printf("Hello World\n");
printf("don't worry be happy\n ");
return aof; // this function should have a wreturn-type(return)
}
