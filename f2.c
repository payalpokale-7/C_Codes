#include<stdio.h>
void main()
{
FILE *fp;
char ch[50];
fp=fopen("f2.txt","W");
fputs("C is procedure oriented lang ",fp);
fclose(fp);
fp=fopen("f2.txt","r");
fgets(ch,300,fp);
printf("%s",ch);
fclose(fp);

}