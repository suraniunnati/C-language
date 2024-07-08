// Write a Program to find the area of a triangle ( 1/2(𝑏 𝑥 ℎ)).


#include <stdio.h>

int main(){

    int b,h,ans;

    printf("Enter base :  ");
    scanf("%d",&b);

    printf("Enter height : ");
    scanf("%d",&h);

    ans=1/2*(b*h);

    printf("Answer Is :  %d",ans);

}
