#include<stdio.h>
#include<maths.h>
int main()
{
float p,roi,si,amount,time,ci;
printf("Enter principle amount:");
scanf("%f",&p);
printf("\nEnter roi:");
scanf("%f",&roi);
printf("\nEnter time:");
scanf("%f",&time);
si=p*roi*time/100;
amount=p*pow((1+roi/100),time);
ci=amount-p;
printf("Enter si is %f",si);
printf(("the ci is %f",ci);
return 0;
}
