//find out total and average of the marks.
#include<stdio.h>
void main()
{
int a,b,c,d,e,Average,Total;
printf("\nEnter five subject marks:\n");
scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);

Average=(a+b+c+d+e)/5;
Total=a+b+c+d+e;

printf("\nAverage is %d",Average);
printf("\nTotal is %d",Total);
}