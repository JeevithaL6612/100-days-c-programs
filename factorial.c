#include<stdio.h>
int main()
{
int n;
long long factorial =1;
printf("enter n:");
scanf("%d",&n);
if(n<0)
{
printf("factorial of negative number does not exist");
}
else
{
for(int i=1;i<=n;++i)
{
factorial*=i;
}
printf("%lld\n",factorial);
}
return 0;
}
