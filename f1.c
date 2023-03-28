#include<stdio.h>
void main()
{
FILE *fp;
fp=fopen("f1.txt","W");
fputc('A',fp);
fputc('B',fp);
fputc('C',fp);
fclose(fp);
fp=fopen("f1.txt","r");
int i;
while((i=fgetc(fp))!=-1)
{
printf("%c",i);
}
}