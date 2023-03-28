//sum of diagonal and non diagonal elements
#include<stdio.h>
void main()
{
int a[3][3],i,j,sd=0,snd=0;
printf("\nEnter Matrix ele");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf ("%d",& a[i][j]);
}
printf("\n");

}

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
	if(i==j)
		sd=sd+a[i][j];
    else
    	snd=snd+a[i][j];
}
}

printf("\nSum of diagonal ele=%d\nSum of non-diagonal ele =%d\n",sd,snd);

}