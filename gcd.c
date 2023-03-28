/*#include<stdio.h>
int gcd(int a,int b)
{
if (b == 0)
	 return a;
	return gcd(b,a % b);

}

void main()
{
int a,b,c;
scanf("%d %d %d", &a,&b,&c);
int res=gcd(a,gcd(b,c));
printf("%d",res);
}*/

#include <stdio.h>

int gcd(int a, int b) {

if (b == 0) {

return a;

}

return gcd(b, a % b);

}

int main() {

int num1, num2, num3, result;

printf("Enter three numbers: ");

scanf("%d %d %d", &num1, &num2, &num3);

result = gcd(num1, gcd(num2, num3));

printf("GCD of %d, %d, and %d is %d\n", num1, num2, num3, result);

return 0;

}