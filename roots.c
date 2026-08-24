#include<stdio.h>
#include<math.h>
int main()
{
double a,b,c;
printf("enter a:");
scanf("%lf",&a);
printf("enter b:");
scanf("%lf",&b);
printf("enter c:");
scanf("%lf",&c);
double d=b*b-4*a*c;
if(d>0)
{
double root1=(-b + sqrt(d))/(2*a);
double root2=(-b - sqrt(d))/(2*a);
printf("roots are real and different:%lf ,%lf\n",root1,root2);
}
else if(d==0)
{
double root=-b/(2*a);
printf("roots are real and equal:%lf\n",root);
}
else
{
printf("roots are complex\n");
}
return 0;
}
