#include<stdio.h>
int main()
{
int num;
long long binary=0,place=1;
printf("enter num:");
scanf("%d",&num);
if(num==0)
{
printf("0\n");
return 0;
}
while(num>0)
{
int remainder = num%2;
binary += remainder * place;
num/=2;
place*=10;
}
printf("%lld\n",binary);
return 0;
}

