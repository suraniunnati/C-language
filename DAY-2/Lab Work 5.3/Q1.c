// Write a Program to find the minimum number from the given 3 numbers using the ternary operator

#include<stdio.h>
int main(){

    int a,b,c;

    printf("enter a value of first number:");
    scanf("%d",&a);
      printf("enter a value of second number:");
    scanf("%d",&b);
      printf("enter a value of theard number:");
    scanf("%d",&c);


    (a<b && a<c)?printf("a is Minimum"):(b<c)?printf("b is Minimum"):printf("c is Mimimum");
}