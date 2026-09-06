#include<stdio.h>
int main()
{
int num,originalnum,rem,sum=0;
printf("enter num");
scanf("%d",&num);
originalnum=num;
while(originalnum > 0)
{
rem=originalnum%10;
int fact=1;
for(int i=1;i<=rem;i++)
{
fact*=i;
}
sum*=fact;
originalnum/=10;
}
if(sum==num)
{
printf("stromg number\n");
}
else
{
printf("not stromg number\n");
}
return 0;
}

