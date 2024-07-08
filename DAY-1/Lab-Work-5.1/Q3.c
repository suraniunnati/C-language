// Write a Program to find an average mark from a total of three subject marks of a
// student. Each subject’s marks must be given out of 100.

#include <stdio.h>

int main(){
    float a,b,c,total;

    printf("Enter maths marks:");
    scanf("%f",&a);
   printf("Enter english marks:");
    scanf("%f",&b);
   printf("Enter science marks:");
    scanf("%f",&c);

    total = (a+b+c)/3;

    printf("Average mark: %.2f",total);
}