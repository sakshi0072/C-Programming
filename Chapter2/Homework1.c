// Write a program to print the average of 3 numbers.

#include <stdio.h>
int main()
{
    int num1, num2, num3, sum = 0;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    sum = num1 + num2 + num3;
    printf("The average of the three numbers is: %d", sum / 3);
    return 0;
}