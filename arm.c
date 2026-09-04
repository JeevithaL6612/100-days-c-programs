#include<stdio.h>
int main()
{
int num,originalnum,remainder,result=0;
printf("enter num:");
scanf("%d",&num);
originalnum=num;
while(originalnum!=0)
{
remainder=originalnum % 10;
result+= remainder*remainder*remainder;
originalnum/=10;
}
if (result==num)
{
printf("Armstrong\n");
}
else
{
printf("Not Armstrong\n");
}
return 0;
}
