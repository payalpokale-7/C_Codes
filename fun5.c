//with return type no parameter
#include<stdio.h>
int add1();
void main()
{
int a=add1();
printf("\nAddition=%d\n",a);
}
int add1()
{
int x,y,z;
printf("\nEnter 3 integer");
scanf("%d%d%d",&x,&y,&z);
return(x+y+z);
}