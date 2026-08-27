#include<stdio.h>
int main()
{
int days;
scanf("%d",&days);
if(days<=0)
{
printf("fine is ₹0\n");
}
else if(days<=5)
{
printf("fine is ₹%d\n",days*2);
}
else if(days<=10)
{
printf("fine is ₹%d\n",5*2+(days-5)*4);
}
else if(days<=30)
{
printf("fine is ₹%d\n",5*2+5*4+(days-10)*6);
}
else
{
printf("membership cancelled\n");
}
return 0;
}
