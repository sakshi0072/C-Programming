#include <stdio.h>
int main()
{
    // output
    printf("Hello World \n"); //\n for new line
    int age = 24;
    printf("My age is %d \n", age); // %d for integer
    char name = '*';
    printf("My name is %c \n", name); // %c for character

    // input
    int age1;
    scanf("%d", &age1);
    printf("My age is %d \n", age1);
    return 0;
}