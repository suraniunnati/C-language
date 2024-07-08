// Write a Program to find the minimum number from the given 2 numbers using if else.

#include<stdio.h>
int main ()
{

    int a,b;

    printf("Enter value of A =");
    scanf("%d",&a);
    printf("Enter value of B =");
    scanf("%d",&b);

    if(a<b)
    {
        printf("A is small number %d",a);
    }
    else
    {
        printf("B is small number %d",b);
    }


}