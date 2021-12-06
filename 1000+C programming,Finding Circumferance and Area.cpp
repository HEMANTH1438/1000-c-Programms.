#include<stdio.h>
int main()
{
    int radi;
    float circum,area;
    printf("Enter the radius of a circle");
    scanf("%d",&radi);
    circum=2*3.14*radi;
    area=3.14*(radi)*radi;
    printf("The circumference of circle is:%.1f",circum);
    printf("\nThe area of circle is:%.1f",area);
}
