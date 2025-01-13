#include <stdio.h>
int main()
{
    int a = 5 * 2 - 2 * 3;
    printf("%d \n", a);
    // output : 4

    int b = 5 * 2 / 2 * 3;
    printf("%d \n", b);
    // output : 15

    int c = 5 * (2 / 2) * 3;
    printf("%d \n", c);
    // output : 15

    int d = 5 + 2 / 2 * 3;
    printf("%d \n", d);
    // output : 8

    return 0;
}
