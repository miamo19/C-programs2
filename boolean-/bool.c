// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int main() { 
char name ='c';
int num1= 5;
float num0 = 4.2;
double num2 = 5.0;

bool result = (num1 == 5) && (num0 < num2);
bool result0 = (num0 > num1) || (num1 == num2);
bool result1 =!(num1>5);
printf("%d", result);
printf("\n%d", result0);
printf("\n%d", result1);
    
    return 0;
}