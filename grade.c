#include<stdio.h>
void main()
{
int a;
printf("\nEnter your marks:");
scanf("%d",&a);

if(a>=70)
printf("\nGrade A\n");

else if(a>=60 && a<70)
printf("\nGrade B+\n");

else if(a>=45 && a<60)
printf("\nGrade B\n");

else if(a>=35 && a<45)
printf("\nGrade C\n");

else
printf("\nFail\n");

}