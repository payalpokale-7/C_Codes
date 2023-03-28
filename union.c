#include<stdio.h>
#include<string.h>
union student
{
int rno;
char nm[10];
float res;
};

void main()
{
union student s1;
s1.rno=101;
strcpy(s1.nm,"Raj");
s1.res=70;
printf("\nRollno=%d\t Name=%s\t Result=%f\n",s1.rno,s1.nm,s1.res);

}