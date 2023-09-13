#include<stdio.h>
int main(){
    float b, h, a;
    printf("enter value of base: ");
    scanf("%f",&b);
    printf("enter value of height: ");
    scanf("%f",&h);
    a=0.5*b*h;
    printf("a=%.2f cm^2 \n",a);
    return 0;

}
