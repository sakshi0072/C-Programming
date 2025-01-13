// Write a program to calculate area of a circle
#include <stdio.h>
int main()
{
    float pi = 3.14;
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    printf("Area of a circle is : %f", pi * r * r);
    return 0;
}