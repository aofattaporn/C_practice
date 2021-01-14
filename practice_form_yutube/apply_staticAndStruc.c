#include<stdio.h> 
#include<math.h> 

// creat Quadratic 
typedef struct new_type{ 
    double x1, x2; 
} new_type;

new_type solceEq2(double a, double b, double c) {
    printf("=================QUADRATIC===============\n");
    double d = sqrt(b * b -4 * a * c);

    // dataType_name object_name = structure_varlue
    new_type ans = {(-b + d) / (2 * a), (-b -d) / (2 * a) };
    // return object_name (objecname is data structure)
    return ans;
}

// creat heron 
// dot -> distance -> area

typedef struct dot{ 
    double x;
    double y;
}dot;


double triangle(double a, double b, double c) { 
    double s = (a + b + c) / 2; 
    return sqrt(s * (s - a) * ( s - b) * (s - c));
}
double distance(dot p1, dot p2) { 
    return sqrt( pow( p1.x - p2.x, 2 ) + pow( p1.y - p2.y, 2 ) );
}


int main() { 
    // creat Quadratic 
    int a = 2;
    int b = 10; 
    int c = 3;
    new_type ans = solceEq2(a, b, c);  // assign 
    printf("x1 = %.2f, x2 = %.2f\n", ans.x1, ans.x2);


    int a2 = 4;
    int b2 = 13; 
    int c2 = 15;
    printf("Area triangle : %.2f\n", triangle(a2, b2, c2));

    dot result1 = {1, 5};
    dot result2 = {3, 9};
    dot result3 = {7, 10};

    printf("Area triangle : %.2f\n", triangle(distance(result1, result2), distance(result2, result3), distance(result1, result3)));



    
}