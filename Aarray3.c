//Multiplication of two matrix
#include<stdio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j,k,sum=0;
printf("\nEnter 1st matrix element");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
printf("\nEnter 2nd matrix element");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
}
printf("\n");
}
for (int i = 0; i < 2; ++i)
{
	for (int j = 0;  j< 2; ++j)
	{
       for (int k = 0; k < 2; ++k)
	{
		sum=sum+a[i][k]*b[k][j];
	}
c[i][j]=sum;
sum=0;
}
}
printf("\nMultiplication of matrices is\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
	
{
printf("%d\t",c[i][j]);
}
printf("\n");
}
}