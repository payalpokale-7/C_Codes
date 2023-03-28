#include<stdio.h>
void main()
{
int a,b,c;
printf("\n Enter 3 no and find which is largest");
scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c )
printf("\n%d is a largest number\n",a);

else if(b>a && b>c )
printf("\n%d is a largest number\n",b);

else if(c>a && c>b)
printf("\n%d is a largest number\n",c);



else
printf("\nInvalid");

}