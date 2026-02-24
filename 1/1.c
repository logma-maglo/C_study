#include<stdio.h>
#include<windows.h>
int main(void)
{
    /*
    int num1 = 10, num2 = 30;
    int i, k;
    printf("num1=%d, num2=%d\n", num1, num2);
    scanf_s("%d %d", &i, &k);
    printf("i=%d, k=%d\n", i, k);
    */

    int num1 = 3;
    double num2 = 2.5 * num1;  
    printf("num1 = %d\n", num1);
    printf("num2 = %.2f\n", num2);


    int num3 = 3;
    double num4 = 2.5 * (double)num3; 
    printf("num1 = %d\n", num3);
    printf("num2 = %.2f\n", num4);


    return 0;

}