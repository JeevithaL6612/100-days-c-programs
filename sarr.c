#include<stdio.h>
int main()
{
int n,target,i;
printf("enter n");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&target);
int low=0,high=n-1;
int resultindex=-1;
while(low<=high)
{
int mid=low+(high-low)/2;
if(a[mid]==target)
{
resultindex=mid;
break;
}
else if(a[mid]<target)
{
low=mid+1;
}
else
{
high=mid-1;
}
}
if(resultindex!=-1)
{
printf("found in index %d\n",resultindex);
}
else
{
printf(" -1\n");
}
return 0;
}



