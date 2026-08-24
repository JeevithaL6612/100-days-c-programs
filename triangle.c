#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a:");
scanf("%d",&a);
printf("enter b:");
scanf("%d",&b);
printf("enter c:");
scanf("%d",&c);
if(a==b && b==c)
{
printf("equilateral\n");
}
else if(a==b||b==c||a==c)
{
printf("isosceles\n");
}
else
{
printf("scalene\n");
}
return 0;
}
