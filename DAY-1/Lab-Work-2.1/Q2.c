// Write a Program to find a square of a number in a rectangular box

#include <stdio.h>

int main()
{
    int a;

    printf("Enter value of a = ");
    scanf("%d", &a);

    printf("----------\n");
    printf("|\t |\n");
    printf(" %d*%d = %d\n",a,a,a*a);
    printf("|\t |\n");
    printf("----------\n");
}       