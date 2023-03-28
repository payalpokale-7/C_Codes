#include<stdio.h>
int factno(int);
void main()
{
int s;
printf("\nEnter a no");
scanf("%d",&s);
int x=factno(s);
printf("\nFactorial=%d\n",x);
}
int factno(int s)
{
if(s==1 || s==0)
	return 1;
else
	return s*factno(s-1);
}