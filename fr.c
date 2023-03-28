// WAP to accept a number from user and find out sum of even digits from that given number
#include<stdio.h>
void main()
{
int i,number,Even_Sum=0,Odd_Sum=0;
printf("\nPlease Enter the Maximum Limit Value:");
scanf("%d",&number);

for(i=1;i<=number;i++)
{
if(i%2==0)
{
Even_Sum=Even_Sum+i;
}
else
{
Odd_Sum=Odd_Sum+i;
}
}

printf("\nThe Sum of Even Numbers upto %d=%d",number,Even_Sum);
printf("\nThe Sum of Odd Numbers upto %d=%d",number,Odd_Sum);

}