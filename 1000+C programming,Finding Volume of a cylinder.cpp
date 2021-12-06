#include<stdio.h>
int main()
{
    float r,h,volume;
    printf("Enter the radius of cylinder");
    scanf("%f",&r);
    printf("Enter the height of cylinder");
    scanf("%f",&h);
    volume=3.14*r*r*h;
    printf("The volume of cylinder is:%.1f",volume);
    return 0;
}
