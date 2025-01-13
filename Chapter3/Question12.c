/*
Write a Program to find if a character entered by user is upper
case or not
*/

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is an uppercase letter.", ch);
    }
    else
    {
        printf("%c is not an uppercase letter.", ch);
    }
    return 0;
}