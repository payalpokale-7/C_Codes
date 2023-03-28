//no return type with parameter
#include<stdio.h>
void add(int,int,int);
void main()
{
int a,b,c;
printf("\nEnter 3 nos");
scanf("%d%d%d",&a,&b,&c);
add(a,b,c);
}
void add(int x,int y,int z)
{
printf("\nAddition of 3 nos=%d",(x+y+z));
}