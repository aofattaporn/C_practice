#include<stdio.h>
#include<math.h> 
void hight() { 
    printf("=====================LEARN ARAYS=============================\n");
    int h[2];// h[0], h[1]
    h[0] = 170; 
    h[1] = 165;
    double avg = 0.0; 
    double sum = 0.0; 
    for (int i = 0; i < 2; i++) { 
        sum += h[i];
    }
    avg = sum / 2.0;
    printf(" avg (loop_for way) : %.2f\n", avg); 
    printf(" avg (nomal way) : %.2f\n", ( h[0] + h[1] ) /2.0);
    }

void demo1() { 
    char grade[4]; 
    grade[0] = 'A'; 
    grade[1] = 'B'; 
    grade[2] = 'C'; 
    grade[3] = 'D'; 
    printf("%c : char grade[4]; \n", grade[2]);

}
void demo2(){ 
    char grade[] = {'A', 'B', 'C', 'D'};
    printf("%c : char grade[] = {'A', 'B', 'C', 'D'}\n", grade[2]);

}
void demo3() { 
    char grade[] = "ABCD";
    printf("%c : char grade[] = ""ABCD"";\n", grade[2]);
}
void demo4() { 
    char grade[] = {'A', 'B', 'C', 'D'}; // การพิมพ์ จะเป็นการ printf ไปจนกว่าจะเจอ \0
    char letter[] = "ABCD";
    printf("%c\n", grade[2]);
    printf("%c\n", grade[2]); // มีการเพิ่ม null 
}

double bmi(int height, int weight) { 
    return weight / pow(height / 100.0, 2);
}
void data_std() { 
    int h[] = {170, 165, 175, 162, 169}; 
    int w[] = {70, 55, 72, 48, 50}; 
    char gender[] = {'M', 'F', 'M', 'F', 'F'};
    for (int i =0; i < 5; ++i) { 
        printf("bmi = %.2f\n", bmi(h[i], w[i]));

    }
}
void data_std2() { 
    int h[] = {170, 165, 175, 162, 169}; 
    int w[] = {70, 55, 72, 48, 50}; 
    char gender[] = {'M', 'F', 'M', 'F', 'F'};
    // int p[3][5]; // ต้องเป็น type ที่สามารถเปลี่ยนกันได้ 
    // p[0][0] = 170; 
    // p[0][1] = 165;
    int p[][5] = { // ไม่ต้องบอก มิติrows บอกเพียงมิติ columns
        {170, 165, 175, 162, 169},
        {70, 55, 72, 48, 50},
        {'M', 'F', 'M', 'F', 'F'}
    };
    for (int i =0; i < 5; ++i) { 
        printf("bmi = %.2f\n", bmi(p[0][i], p[1][i]));

    }
}

int main() { 
hight();
printf("=============HOW USE ARAYS =============\n");
demo1();
demo2();
demo3();
// demo4();

printf("=============1D ARAYS=============\n");
data_std();
printf("=============2D ARAYS=============\n");
data_std2();

}