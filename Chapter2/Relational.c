#include <stdio.h>
int main()
{
    //==
    printf("%d \n", 4 == 4); // output 1
    printf("%d \n", 4 == 3); // output 0

    //> >=
    printf("%d \n", 4 > 5);  // output 0
    printf("%d \n", 4 >= 4); // output 1

    //< <=
    printf("%d \n", 4 < 3);  // output 0
    printf("%d \n", 4 <= 4); // output 1

    // not equal to
    printf("%d \n", 4 != 5); // output 1
    printf("%d \n", 4 != 4); // output 0
    return 0;
}