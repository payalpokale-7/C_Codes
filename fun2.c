//no return type and no parameter
#include<stdio.h>
void area();
void main()
{
area();
}
void area()
{
int r;
printf("\nEnter radius");
scanf("%d",&r);
printf("\nArea of circle=%d",(3.14*r*r));
}