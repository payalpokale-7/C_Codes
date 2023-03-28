#include<stdio.h>
void main()
{
int x[5],i,s1,s2;
printf("\nEnter Array elements");
for(i=0;i<5;i++)
{
 scanf("%d",& x[i]);
}
for(i=0;i<5;i++)
{
if(i%2==0)
	s1=s1+x[i];
else
	s2=s2+x[i];
printf("\nSum of even index ele=%d\n Sum of odd index ele = %d \n",s1,s2);

}

}