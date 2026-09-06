#include<stdio.h>
int main()
{
int num,digit,product =1;
printf("enter num:");
scanf("%d",&num);
while(num>0)
{
digit=num %10;
if(num%2!=0)
{
product*=digit;
}
num/=10;
}
printf("%d\n",product);
return 0;
}


