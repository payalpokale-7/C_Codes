#include<stdio.h>
#include<stdlib.h>
void main()
{
char *c;
int l;
printf("\nEnter length of String: ");
scanf("%d",&l);
c=(char*)calloc(sizeof(char),l);
printf("\nEnter String: ");
scanf("%s",c);
printf("\nString=%s\n",c);
free(c);
}