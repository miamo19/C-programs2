#include<stdio.h>
#include<conio.h>
int main()
{
    float len, areas;
    printf("Enter length of Square: ");
    scanf("%f", &len);
    areas = len*len;
    printf("\nArea = %0.2f", areas);
    getch();
    return 0;
}
