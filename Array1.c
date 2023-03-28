#include<stdio.h>
void main()
{
int x[5],i,sum=0;
printf("\nEnter array elements" );
for(i=0;i<5;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<5;i++)
{
sum=sum+x[i];
}
printf("\nSum of array elements =%d\n",sum);
}

