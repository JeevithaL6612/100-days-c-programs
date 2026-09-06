#include<stdio.h>
#include<math.h>
int main()
{
int num,temp,digit=0,first_digit,last_digit;
printf("enter num:");
scanf("%d",&num);
if(num<10)
{
printf("%d\n",num);
return 0;
}
last_digit=num % 10;
temp=num;
while(temp>=10)
{
temp/=10;
digit++;
}
first_digit=temp;
int place_value= pow(10,digit);
int middle_part=(num % place_value)/10;
int swapped_num=(last_digit * place_value) + (middle_part*10) + first_digit;
printf("%d\n",swapped_num);
return 0;
}
