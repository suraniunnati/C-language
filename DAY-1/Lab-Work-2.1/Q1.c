// Write a Program to perform all arithmetic operators such as +, -, *, / and %

#include <stdio.h>

int main(){

    int a,b;

    printf("Enter A Value : ");
    scanf("%d",&a);

    printf("Enter B Value : ");
    scanf("%d",&b);

    printf("Adition of A + B = %d\n", a + b);
    printf("Subtraction of A - B = %d\n", a - b);
    printf("Multiplication of A * B = %d\n", a * b);
    printf("Divition of A / B = %d\n", a / b);
    printf("Modul of A % B = %d\n", a % b);

}