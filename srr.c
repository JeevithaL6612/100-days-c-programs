#include<stdio.h>
int main()
{
int n;
printf("enter n:");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int largest=a[0];
int second_largest=-999999;
for(int i=0;i<n;i++)
{
if(a[i]>largest)
{
second_largest=largest;
largest=a[i];
}
else if(a[i]>second_largest && a[i]!=largest)
{
second_largest=a[i];
}
}
printf("%d\n",second_largest);
return 0;
}

