#include<stdio.h>
int main()
{
float P,R,T;
printf("Enter p,r, and t values \n");
scanf("%f %f %f",&P,&R,&T);
float SI=(P*R*T)/100;
printf("Simple Interest=%f\n",SI);
return 0;
}