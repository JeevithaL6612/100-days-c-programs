#include<stdio.h>
int main()
{
float sp,cp,profit_or_loss,percentage;
printf("enter sp:");
scanf("%f",&sp);
printf("enter cp:");
scanf("%f",&cp);
if(sp>cp)
{
profit_or_loss=sp-cp;
percentage=(profit_or_loss/cp)*100;
printf("profit %.0f%%\n",percentage);
}
else if(cp>sp)
{
profit_or_loss=cp-sp;
percentage=(profit_or_loss/sp)*100;
printf("loss %.0f%%\n",percentage);
}
else
{
printf("no profit no loss\n");
}
return 0;
}
