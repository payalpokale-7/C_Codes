// Fahrenheit temp in degree Celsius
#include<stdio.h>
int main()
{
float celsius,fahrenheit;
printf("Please Enter the temperature in fahrenheit:\n");
scanf("%f",&fahrenheit);
celsius=(fahrenheit-32)*5/9;
printf("\n %.2f fahrenheit= %2f celsius",fahrenheit,celsius);
return 0;
}