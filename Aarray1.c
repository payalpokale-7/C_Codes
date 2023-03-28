 //WAP to calculate average marks of a 10 students
#include<stdio.h>
void main()
{
int x[10],i,sum=0,avg;
printf("\nEnter array elements");
for(i=0;i<10;i++)
{
scanf("%d",&x[i]);
}
for(i=0;i<10;i++)
{
sum=sum+x[i];
}
avg=sum/10;
printf("\n Average marks of a 10 students = %d\n",avg);
}
