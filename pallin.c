#include<stdio.h>
int main()
{
int num,originalnum,reverse=0,remainder;
printf("enter num:");
scanf("%d",&num);
originalnum = num;
while(num >0)
{
remainder=num%10;
reverse=reverse*10+remainder;
num /= 10;
}
if(originalnum==reverse)
{
printf("pallindrome\n ");
}
else
{
printf(" not pallindrome\n ");
}
return 0;
}
