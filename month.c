#include<stdio.h>
int main()
{
int month;
printf("enter month number (1-12):");
scanf("%d", &month);
switch (month)
{
case 1:
    printf("Month =January\nDys:31 days\n");
    break;
case 2:
    printf("Month =February\nDys:28 or 29 days\n");
    break;    
case 3:
    printf("Month =March\nDys:31 days\n");
    break;
case 4:
    printf("Month =April\nDys:30 days\n");
    break;
case 5:
    printf("Month =May\nDys:31 days\n");
    break;
case 6:
    printf("Month =June\nDys:30 days\n");
    break;
case 7:
    printf("Month =July\nDys:31 days\n");
    break;
case 8:
    printf("Month =August\nDys:31 days\n");
    break;
case 9:
    printf("Month =September\nDys:30 days\n");
    break;
case 10:
    printf("Month =October\nDys:31 days\n");
    break;
case 11:
    printf("Month =November\nDys:30 days\n");
    break;
case 12:
    printf("Month =December\nDys:31 days\n");
    break;
default:
    printf("invalid input\n");
}
return 0;
}                    
                    
    
