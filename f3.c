#include<stdio.h>
void main()
{
FILE *fp;
char ch[20];
fp=fopen("f3.txt","W");
fprintf( fp,"Hello everyone" );
fclose(fp);
fp=fopen("f3.txt","r");
fscanf(fp,"%s",ch);
printf("%s",ch);
fclose(fp);
}