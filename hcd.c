#include<stdio.h>
int main()
{
int n1,n2,hcf=1;
printf("enter n1,n2:");
scanf("%d %d",&n1,&n2);
int min=(n1< n2)?n1:n2;
for(int i=1;i<=min;i++)
{
if(n1 % i ==0 && n2 % i ==0)
{
hcf=i;
}
}
printf("%d\n",hcf);
return 0;
}
