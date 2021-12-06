#include<stdio.h>
int main()
{
    int b1,b2,h,Area;
    printf("Enter the base 1 of trapezoid");
    scanf("%d",&b1);
    printf("Enter the base 2 of trapezoid");
    scanf("%d",&b2);
    printf("Enter the height of trapezoid");
    scanf("%d",&h);
    Area=(b1+b2)*h/2;
    printf("The area of trapezoid is:%d",Area);
    return 0;
}
