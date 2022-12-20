#include <stdio.h>
int main() {
    int num;
    int num2;
    printf("Enter an first integer: ");
    scanf("%d", &num);
    
    printf("Enter an second integer: ");
    scanf("%d", &num2);
    
    (num % 2 == 0) ? printf("%d is even.", num) : printf("%d is odd.", num);
    return 0;
}
