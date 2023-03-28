#include<stdio.h>
void main()
{
int a;
printf("\nEnter a number and find number is positive ,negative or zero:\n");
scanf("%d",&a);

if(a>0)
printf("%d is a positive no",a);

else if(a<0)
printf("%d is a Negative no",a);

else if(a==0)
printf("%d is a zero ",a);


}