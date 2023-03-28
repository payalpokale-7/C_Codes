#include<stdio.h>
void main()
{
int a[5],i,count=0,n;
printf("\nEnter array elements");
for(i=0;i<5;i++)
{
scanf("%d", & a[i]);
}
printf("\nEnter no to be searched");
scanf("%d", &n);
for(i=0;i<5;i++)
{
if(n==a[i])
{
printf("\nElement found at index %d\n",i);
break;

}
count++;
if(count==5)
	printf("\n Element not found");
}
}