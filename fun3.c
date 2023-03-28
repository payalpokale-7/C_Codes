//with return type with parameter
#include<stdio.h>
int add(int ,int,int);
void main()
{
int a,b,c;
printf("\nEnter 3 nos");
scanf("%d %d %d",&a,&b,&c);
int x=add(a,b,c);
printf("\nAddition=%d\n",x);

}
int add(int a,int b,int c)
{
return(a+b+c);
}