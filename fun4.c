//with return type with parameter
#include<stdio.h>
float area(int);
void main()
{
int r;
printf("\nEnter radius");
scanf("%d",&r);
float x=area(r);
printf("\nArea of circle=%f\n",x);
}
float area(int r1)
{
return(3.14*r1*r1);
}