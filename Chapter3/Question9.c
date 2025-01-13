/*
Write a program to check if a student passed or failed.
marks > 30 is PASS
marks <= 30 is
*/

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks > 30)
    {
        printf("You Passed");
    }
    else
    {
        printf("You Failed");
    }
    return 0;
}