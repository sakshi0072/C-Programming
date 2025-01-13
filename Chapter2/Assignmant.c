#include <stdio.h>

int main()
{
    //=
    int a = 5;
    printf("%d \n", a); // output 5

    // +=
    int c = 5;
    int b = 10;
    c += b;
    printf("%d \n", c); // output  15

    //-=
    int d = 10;
    int e = 5;
    d -= e;
    printf("%d \n", d); // output 5

    //*=
    int f = 10;
    int g = 2;
    f *= g;
    printf("%d \n", f); // output 20

    ///=
    int h = 10;
    int i = 2;
    h /= i;
    printf("%d \n", h); // output 5

    //%=
    int j = 10;
    int k = 2;
    j %= k;
    printf("%d \n", j); // output 0

    return 0;
}