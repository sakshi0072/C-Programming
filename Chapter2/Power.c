#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, p;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b); 
    p = pow(a, b);         
    printf("Power of the two numbers is %f\n", p);
    return 0;
}
