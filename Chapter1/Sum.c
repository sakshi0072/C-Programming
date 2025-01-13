#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter number: \n");
    scanf("%d", &a);
    printf("Enter number: \n");
    scanf("%d", &b);
    printf("Sum of the number is %d \n", a + b);

    int c;
    int d;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("sum is %d \n", a + b);
    return 0;
}