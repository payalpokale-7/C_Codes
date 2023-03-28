
#include<stdio.h>
//void main()
/*
//enter user input
{
 int number;
 printf("Enter a number: ");
 scanf("%d", &number);

 printf("Your number is: %d", number);
}

//Addition of 2 integer
{
 int number1,number2,sum;

 printf("\nEnter 2 no. is\n");
 scanf("%d%d", &number1,&number2);

 sum=number1+number2;

printf("%d+%d=%d", number1,number2,sum);

}

//product of 2 floating number
{
float a,b,product;

printf("\nEnter 2 flaoting number\n");
scanf("%f %f", &a, &b);

product= a * b;

printf("%f * %f= %f", a,b,product);
}

//divison of 2 no
{
double a1,a2,div;

printf("\nEnter 2 numbers\n");
scanf("%lf %lf", &a1,&a2);

div = a1/a2;

printf("%.2lf / %.2lf = %.2lf", a1, a2, div);
}


//ASCII value 
{
char c;

printf("\nEnter a character:\n");
scanf("%c",&c);

printf("ASCII value of %c = %d",c ,c);
}


//Quotient and Remainder
{
	int dividend, divisor, quotient, remainder;
	printf("Enter dividend ");
	scanf("%d", &dividend);
	printf("Enter divisor: ");
	scanf("%d", &divisor);

	quotient = dividend / divisor;

	remainder= dividend % divisor;

	printf("Quotient = %d\n", quotient);
	printf("Remainder = %d" , remainder);
}

//size of variables
{
int intType;
float floatType;
double doubleType;
char charType;

//sizeof evaluates the size of a variable
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu bytes\n", sizeof(charType));

}


//swap numbers using temporary variable
{
double first,second,temp;
printf("Enter first number: ");
scanf("%lf", &first);
printf("Enter second number: ");
scanf("%lf", &second);

//value of first is assigned to temp
temp = first;

//value of second is assigned to first
first = second;

//value of temp (initial value of first) is assigned to second
second = temp;

//%.2lf displays number up to 2 decimal points 
printf("\nAfter swappping, first number = %.2lf\n", first);
printf("After swapping, second number = %.2lf" , second);
}

//check whether a character is a vowel or consonant
{
char c;
int lowercase_vowel, uppercase_vowel;
printf("Enter an alphabet:");
scanf("%c", &c);

lowercase_vowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');

uppercase_vowel = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

if(lowercase_vowel || uppercase_vowel)
    printf("%c is a vowel.",c);
else
	printf("%c is a consonant.",c);
}


//Largest number Among Three Numbers

{
int n1,n2,n3;
printf("\n Enter 3 numbers: \n");
scanf("%d%d%d", &n1, &n2, &n3);

if(n1>=n2 && n1>= n3)
	printf("\n %d is a Largest number",n1);
else if(n2>=n1 && n2>= n3)
	printf("\n %d is a Largest number",n2);
else if(n3>=n1 && n3>=n2)
	printf("\n %d is a Largest number",n3);
else
	printf("\nInvalid");
}


//leap year program

{
 int year;

 printf("\nEnter a year: ");
 scanf("%d" ,&year);

if((year%400==0) && (year%4==0) || (year%100==0))
	printf("\n  %d is a Leap year\n " , year);
else
	printf("\n %d is not a Leap year\n" , year);
}


//Fahrenheit scale to Celsius scale


float fahrenheit_to_celsius(float f)
{
  return ((f-32.0) * 5.0 / 9.0);
}

//Driver code
int main()
{
  float f ;
   printf("\nFahrenheit: \n");
   scanf("%f" , &f);

  //passing parameter to function
  printf("Temperature in Degree Celsius : %0.2f", fahrenheit_to_celsius(f));
  return 0;
}
*/
