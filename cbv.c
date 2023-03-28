//call by value
#include<stdio.h>
void swap(int *,int *);
void main()
{
int a,b;
printf("\nEnter 2 integers:");
scanf("%d%d",&a,&b);
printf("\nvalues before swapping are a=%d\t b=%d\n",a,b);
swap(&a,&b);
printf("\n values after swapping are a=%d\t b=%d\n",a,b);
}
void swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
}
