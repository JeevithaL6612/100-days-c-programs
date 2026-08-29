#include<stdio.h>
int main()
{
int n,sum=0,odd = 1;
printf("enter n:");
scanf("%d",&n);
for (int i=1;i <= n;i++)
{
sum+=odd;
odd+=2;
}
printf("%d\n",sum);
return 0;
}

