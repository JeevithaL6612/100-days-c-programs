#include<stdio.h>
int main()
{
int rows=5;
for(int i= 5;i>=1;i--)
{
for(int space= 1;space<=5-i;space++)
{
printf(" ");
}
for(int j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
