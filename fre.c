#include<stdio.h>
int main()
{
long long n;
scanf("%lld",&n);
int count[10]={0};
if (n==0)
count[0]++;
while(n>0)
{
count[n%10]++;
n/=10;
}
int maxFreq=0,mostFrequentDigit=0;
for(int i=0;i<10;i++)
{
if(count[i]>maxFreq)
{
maxFreq=count[i];
mostFrequentDigit=i;
}
}
printf("%d\n",mostFrequentDigit);
return 0;
}




