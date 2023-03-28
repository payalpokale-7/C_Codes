#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p,i,n;
printf("\nEnter size of an array");
scanf("%d",&n);
int a[n];
p=(int*)malloc(sizeof(int)*n);
printf("\n Enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
}
printf("\nArray is:");
for(i=0;i<n;i++)
{
printf("%d\t",*(p+i));
}
free(p);
}