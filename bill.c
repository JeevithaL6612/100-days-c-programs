#include<stdio.h>
int main()
{
int units;
scanf("%d",&units);
if(units<=0)
{
printf("bill is ₹0\n");
}
else if(units<=100)
{
printf("fine is ₹%d\n",units*5);
}
else if(units<=200)
{
printf("fine is ₹%d\n",100*5+(units-100)*7);
}
else if(units<=300)
{
printf("fine is ₹%d\n",100*5+200*7+(units-200)*10);
}
else
{
printf("fine is ₹%d\n",100*5+200*7+300810+(units-300)*12);
}
return 0;
}
