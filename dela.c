#include<stdio.h>
int main()
{
int n,pos;
printf("enter size of aaray:");
scanf("%d",&n);
int a[100];
printf("enter %d elements",n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter position(0- based index)of element to delete:");
scanf("%d",&pos);
for(int i=pos;i< n-1;i--)
{
a[i]=a[i+1];
}
n--;
printf("output: ");
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
if(i<n-1)
{
printf(" ");
}
}
printf("\n");
return 0;
}

