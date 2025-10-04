/*to calculate the perimetr of a triangle
and its formula is p=a+b+c*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c,p;
    printf("Enter the sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);
    p=a+b+c;
    printf("The perimeter of the triangle is:%d",p);
    getch();
}