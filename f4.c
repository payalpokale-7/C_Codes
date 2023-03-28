//structure using File Handling
#include<stdio.h>
struct Student
{
int rno;
char nm[10];
float res;
};
void main()
{
FILE *fp;
int i;
struct Student s[3];
fp=fopen("stud.txt","a");
for(i=0;i<3;i++)
{
printf("\nEnter Rollno,Name and Result");
scanf("%d%s%f",&s[i].rno,s[i].nm,&s[i].res);
fprintf(fp,"\nRollno=%d\tName=%s\tResult=%f\n",s[i].rno,s[i].nm,s[i].res);

}
fclose(fp);
fp=fopen("stud.txt","r");
while((i=fgetc(fp))!=-1)
{
printf("%c",i);
}
fclose(fp);

}