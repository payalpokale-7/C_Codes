//transpose of Matrix
#include<stdio.h>
void main()
{
int a[3][3],i,j;
printf("\nEnter matrix ele");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
printf("\n matrix is:\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\nTranspose of Matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[j][i]);
}
printf("\n");
}

}