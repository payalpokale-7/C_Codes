#include<stdio.h>
void main()
{
int arr[7],i;
//Accepting array elements
printf("Enter array elements");
for(i=0;i<7;i++)
{
scanf("%d",&arr[i]);

}

//displaying array element
printf("\nArray is:");
for(i=0;i<7;i++)
{
printf("%d\t",arr[i]);
}
}