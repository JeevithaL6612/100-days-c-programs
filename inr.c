#include<stdio.h>
int main()
{
int n,pos,ele;
printf("enter size of aaray:");
scanf("%d",&n);
int a[100];
printf("enter %d elements",n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter position(0- based index)and element to insert:");
scanf("%d %d",&pos,&ele);
for(int i=n;i>pos;i--)
{
a[i]=a[i-1];
}
a[pos]=ele;
n++;
printf("output: ");
for(int i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
return 0;
}

