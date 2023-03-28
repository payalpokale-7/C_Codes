//structure using DMA
#include<stdio.h>
#include<stdlib.h>
struct Student
{
	int rno;
	char nm[10];
	float res;
};
void main()
{
struct Student *s;
int n,i;
printf("\nEnter no of students" );
scanf("%d",&n);
s=(struct Student*)calloc(sizeof(struct Student),n);
for(i=0;i<n;i++)
{
printf("\nEnter rollno,name and result");
scanf("%d%s%f",&(s+i)->rno,(s+i)->nm,&(s+i)->res);

}
printf("\nstudent details:\n");
for(i=0;i<n;i++)
{
printf("\nRollno=%d\tName%s\tResult=%f\n",(s+i)->rno,(s+i)->nm,(s+i)->res);

}
free(s);
}
