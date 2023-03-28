//acccept matrix elements from user and display
#include<stdio.h>
void main()
{
int a[3][3],i,j;
//Accepting matrix ele
printf("\nEnter matrix ele");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
printf("\n");
}
//displaying matrix ele
printf("\nMatrix is:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}

}