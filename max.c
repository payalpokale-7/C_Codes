//maximum number
#include<stdio.h>
void main(){
int a,b,c;
printf("\n Enter integers: \n");
scanf("%d%d%d", &a,&b,&c);

if(a>b && a>c)
printf("\n %d is Maximum number\n",a);

else if(b>a && b>c)
printf("\n %d is Maximum number\n",b);

else if(c>a && c>b)
printf("\n %d is Maximum number\n" ,c);

else
printf("\n Can't determine");
}
