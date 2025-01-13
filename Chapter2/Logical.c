#include <stdio.h>
int main()
{
    //&& AND
    printf("%d \n", 4 > 5 && 5 < 4); // output 0

    //|| OR
    printf("%d \n", 4 < 5 || 5 < 4); // output 1

    // NOT
    printf("%d \n", !((5 > 1) && (3 > 4))); // output 1

    printf("%d \n", !(5 > 1) && (3 > 4)); // output 0
    return 0; 
}