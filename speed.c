//speed
#include<stdio.h>
void main()
{
int speed,distance,time;
printf("\nEnter a distance");
scanf("%d",&distance);
printf("\nEnter a time");
scanf("%d",&time);

speed=(distance/time);
printf("\nspeed = %d",speed);
}