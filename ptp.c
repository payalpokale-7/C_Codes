#include<stdio.h>
void main()
{
int a=30;
int *p1;
p1=&a;
int **p2;
p2=&p1;
int ***p3;
p3=&p2;

printf("\nvalue of a=%d\n",a);
printf("\nvalue inside the p1=%d\n",*p1);
printf("\nvalue inside the p2=%d\n",**p2);
printf("\nvalue inside the p3=%d\n",***p3);
}