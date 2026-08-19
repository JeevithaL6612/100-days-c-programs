#include<stdio.h>
#include<math.h>
int main()
{
double ci,si,principal,rate,time,amount;
printf("enter principal:");
scanf("%lf",&principal);
printf("enter rate:");
scanf("%lf",&rate);
printf("enter time:");
scanf("%lf",&time);
si=(principal*rate*time)/100.0;
amount=principal * pow((1.0+(rate/100.0)),time);
ci=amount-principal;
printf("\n---results---\n");
printf("Simple Interest=%.2lf\n",si);
printf("Compound Interest=%.2lf\n",ci);
printf(" Total Amount=%.2lf\n",amount);
return 0;
}


