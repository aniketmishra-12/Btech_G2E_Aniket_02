#include<stdio.h>
int main()
{
    float radius,area,circumference;
    printf("Enter radius of circle;");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("The area of circle is :%f",area);
    printf("\nThe circumference of circle is:%f",circumference);
    
    return 0;
    

}
