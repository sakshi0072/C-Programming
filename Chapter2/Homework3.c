// Write a program to print the smallest numberl

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("%d is smallest number", num1 > num2 || num2 > num1);
    return 0;
}