#include<stdio.h> 
#include<string.h>


int sumDigit(char *s) { 
    int sum = 0; 
    for(int item =0; item < strlen(s); ++item) { 
        sum += s[item] - '0'; // เข้าถึง index ของแต่ละตัวอักษร 
        // printf("%c\n", s[item]);
    }
    return sum;
}
void nicePlate(int fromNum, int toNum) { 
    for (int i = fromNum; i <= toNum; ++i) {
        char s[5]; 
        sprintf(s, "%d", i); // แปลงค่าจาก int -> string
        int sum = sumDigit(s);
        if (sum == 9) { 
            printf("nice plate = %s, sum = %d\n", s, sum);
        }


    }
}
int main() { 
    char plate[] = "4711";
    printf("sum all digits of %s = %d\n", plate, sumDigit(plate));
    nicePlate(1000, 1999);


}