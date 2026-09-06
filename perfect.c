#include<stdio.h>
int main()
{
int num,sum=0;
printf("enter num");
scanf("%d",&num);
for(int i=1;i<=num/2;i++)
{
if(num%i==0)
{
sum+=i;
}
}
if(sum==num && num>0)
{
printf("perfect number\n");
}
else
{
printf("not perfect number\n");
}
return 0;
}

