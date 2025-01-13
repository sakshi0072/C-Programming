/*
Write a program to check if a given number is
Armstrong number or not.
(Search what is Armstrong number)
*/

#include <stdio.h>
int main()
{
    int num, temp, sum = 0, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    temp = num;
    while (temp != 0)
    {
        int digit = temp % 10;
        sum = sum + digit * digit * digit;
        temp = temp / 10;
    }
    if (sum == n)
    {
        printf("%d is an Armstrong number", n);
    }
    else
    {
        printf("%d is not an Armstrong number", n);
    }
    return 0;
}