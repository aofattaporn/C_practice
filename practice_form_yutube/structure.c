#include<stdio.h> 
struct test{
// data_type var_name
    int x;
    int y;
}abc; 

typedef struct NAME{
    int a; 
    int b;
}abc2;



int main() { 
    // การประกาศในแบบที่ 1
    // struct struct_name var_name;
    struct test test1; 
    // var_name.var_name_in_struvtur
    test1.x = 10;
    test1.y = 10;
    printf("%d, %d\n", test1.x, test1.y);

    // การประกาศในแบบที่ 2
    abc2 test2; 
    test2.a = 11; 
    test2.b = 11;
    struct NAME variable;
    // NAME variable2;
    printf("%d, %d\n", test2.a, test2.a);
}

