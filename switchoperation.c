#include<stdio.h>
void main()
{
char ch;
int a,b;
printf("Enter an operator(+,-,*,/): ");
scanf("%c",&ch);
printf("Enter two operands: ");
scanf("%d %d",&a,&b);

switch (ch) {
case '+':
printf("%d + %d = %d",a,b,a+b);
break;

case '-':
printf("%d - %d = %d",a,b,a-b);
break;

case '*':
printf("%d * %d = %d",a,b,a*b);
break;

case '/':
printf("%d / %d = %d",a,b,a/b);
break;

default:
printf("Error!operator is not correct");
}

}