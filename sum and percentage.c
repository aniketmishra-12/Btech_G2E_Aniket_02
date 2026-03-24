#include<stdio.h>
int main()
{
int phy,chem,maths,eng,cs,sum,percentage;
printf("Enter the marks of all 5 subjects:");
scanf("%d%d%d%d%d",&phy,&chem,&maths,&eng,&cs);
sum=(phy+chem+maths+eng+cs);
percentage=sum/5;
printf("The sum and percentage of the marks are:%d and %d",sum,percentage);
return 0;
}
