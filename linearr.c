#include<stdio.h>
int main()
{
int n,target,index=-1;
printf("enter n:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d",&target);
for(int i=0;i<n;i++)
{
if(arr[i]==target)
{
index=i;
break;
}
}
if(index!=-1)
{
printf("found at index %d\n",index);
}
else
{
printf("-1\n");
}
return 0;
}

