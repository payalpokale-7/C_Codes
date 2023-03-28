#include<stdio.h>
void main()
{
int a,b;
char ch;
printf("Enter your choice \n+.Add\n-.Sub\n*.Mult\n/.Div\n 
	%.Mod\n");
scanf("%c", &ch);
printf("Enter 2 nos\n");
scanf("%d%d", &a, &b);

switch(ch)
{
case '+':
  printf("\nAdd=%d",(a+b));
  break;
case '-':
  printf("\nSub=%d",(a-b));
  break;
case '*':
  printf("\nMult=%d",(a*b));
  break;
case '/':
  printf("\nDiv=%d",(a/b));
  break;
case '%':
  printf("\nRem=%d",(a%b));
  break;

default:
  break;
}

}