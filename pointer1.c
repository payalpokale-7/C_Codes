#include<stdio.h>
void main()
{
int x=100;
int *ptr;
ptr=&x;

printf("\nvalue of x=%d\n",x);
printf("\nAddress of x=%d\n",x);
printf("\nvalue of ptr=%d\n",*ptr);
printf("\nAddress of ptr=%d\n",*ptr);
printf("\nvalue inside the ptr=%d\n",*ptr);
}