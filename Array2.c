#include<stdio.h>
void main()
{
int x[5],i;
printf("\nEnter array elements");
for(i=0;i<5;i++)
{
  scanf("%d",&x[i]);
}
for(i=0;i<5;i++)
{
if(i%2==0)
	printf("\nEven index is %d and ele=%d\n",i,x[i]);
}

}