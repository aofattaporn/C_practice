#include<stdio.h> 
struct test{
// data_type var_name
    int x;
    int y;
}abc; 

typedef struct {
    int x; 
    int y;
}abc2;



int main() { 
    // การใช้ 
    // struct struct_name var_name;
    struct test test1; 
    // var_name.var_name_in_struvtur
    test1.x = 10;
    test1.y = 10;
    printf("%d, %d\n", test1.x, test1.y);

    abc2 test2; 
    test2.x = 11; 
    test2.y = 11;
    printf("%d, %d\n", test2.x, test2.y);
}

