#include<stdio.h>
int main()
{
float a,b,sum,difference,quotient,product;
printf("enter first number:");
scanf("%f",&a);
printf("enter second number:");
scanf("%f",&b);
sum=a+b;
difference=a-b;
product=a*b;
printf("\nsum = %.2f\n",sum);
printf("difference = %.2f\n",difference);
printf("product = %.2f\n",product);
if (b!=0)
{
quotient=a/b;
printf("quotient = %.2f\n",quotient);
}
else
{
printf("quotient=cannot divide by zero\n");
}
return 0;
}

