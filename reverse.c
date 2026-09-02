#include<stdio.h>
int main()
{
int num,reverse=0,remainder;
printf("enter num:");
scanf("%d",&num);
while(num!=0)
{
remainder=num%10;
reverse=reverse*10+remainder;
num/=10;
}
printf("%d\n",reverse);
return 0;
} 
