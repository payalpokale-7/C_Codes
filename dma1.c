#include<stdio.h>
#include<stdlib.h>
void main()
{
int *p,n,i,m;
printf("\nEnter size of array");
scanf("%d",&n);
p=(int*)calloc(sizeof(int),n);
printf("\nEnter array elements");
for (int i = 0; i < n; i++)
{
	scanf("%d",(p+i));
}
printf("\nHow many elements u want to add?");
scanf("%d",&m);
p=(int*)realloc(p,m);

printf("\nEnter array elements");
for(i=0;i<(n+m);i++)
{
scanf("%d",(p+i));
}
printf("\nArray elements are:");
for(i=0;i<(n+m);i++)
{
printf("%d\t",*(p+i));
}
free(p);

}