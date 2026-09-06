#include<stdio.h>
int main()
{
long long binary,temp,complement =0,place=1;
printf("enter binary:");
scanf("%lld",&binary);
temp=binary;
while(temp>0)
{
int last_digit=temp%10;
int flipped_digit=(last_digit==0)?1:0;
complement=complement+(flipped_digit*place);
place*=10;
temp/=10;
}
if(binary==0)
{
printf("1\n");
}
else
{
printf("%0*lld\n",(int)snprintf(NULL,0,"%lld",binary),complement);
}
return 0;
}
