Write a Program to find the Perimeter of the circle ( 2π𝑟).

#include <stdio.h>

int main(){

    int r;
     float ans;
    const float pi=3.14;

    printf("Enter Radius of the circle: ");
    scanf("%d",&r);

    ans=2*pi*r;

    printf("Perimeter of the circle is : %.2f",ans);
    


}