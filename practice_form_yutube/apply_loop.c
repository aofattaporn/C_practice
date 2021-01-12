#include<stdio.h> 

int gcc(int a, int b) { 
    printf("\n");
    int min = a < b ? a:b;
    for(int i = min; i >=1; i--) { 
        if(a % i == 0 && b % i == 0) { 
            return i;
        }
    }
    return 0;
}

int gcd_euclid(int a, int b) { 
    int t;
    while (b != 0) 
    {
        t = b;
        b = a%b;
        a = t;
    }
    return a;
}

// float root(double s) { 
//     double s = 12345;
//     double x = sqroot(s); 
//     double x0 = s / 2.0; 
//     double x1;
//     double precision = .0001;
//     double delta = 1;
//     while(delta > precision) 
//     {
//         x1 = .5 * (x0 + s / x0);
//         delta = fabs(x1 - x0); 
//         printf("x0 = %.7f, x1 = %.7f, delta = %.7f")
//         x0 = x1;
//     }   
// }

int main() { 


    printf("gcd(%d, %d) : %d\n", 9, 21, gcc(9, 21));
    printf("gcd(%d, %d) : %d\n", 9, 21, gcd_euclid(9, 21));
}