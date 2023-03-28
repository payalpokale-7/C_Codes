#include<stdio.h>
void show();
void main();
{
int i;
for(i=0;i<4;i++)
{
show();
}
}
void show()
{
static int x=10;
int y=10;
x++;
y++;
printf("\nx=%d\ty=%d\n",x,y);
}