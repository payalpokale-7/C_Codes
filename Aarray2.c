 //WAP to find greatest and smallest number in an array.
#include<stdio.h>
#define Array_SIZE(a) sizeof(a)/sizeof(a[0])

int main()
{
int arr[]={3,18,10,4,0,22,15};
int i,small,large;
const int N=Array_SIZE(arr);
small=arr[0];
large=arr[0];
for(i=1;i<N;i++)
{
if(arr[i]<small)
{
small=arr[i];
}
if(arr[i]>large)
{
large=arr[i];
}
}
printf("Largest element is :%d\n",large);
printf("Smallest element is :%d\n",small);

return 0;
}