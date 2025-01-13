#include <stdio.h>
int main()
{
    int n;
    printf("Enter a marks: ");
    scanf("%d", &n);
    
    if (n >= 95)
    {
        printf("A++");
    }
    else if (n >= 80 && n < 95)
    {
        printf("A+");
    }
    else if (n >= 60 && n < 80)
    {
        printf("A");
    }
    else
    {
        printf("Fail");
    }
    
    return 0;
}
