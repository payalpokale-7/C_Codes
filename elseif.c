/*WAP to accept Cost Price from user and ask whether the user is a student or not. If the user is 
student and cost price is greater than 500, give discount of 10% ELSE discount will be 5%. If user 
is not student and cost price is greater 500 then give discount of 8% ELSE discount will be 2%. 
(Take all inputs from USER)*/

#include<stdio.h>
void main()
{
int cp;
string stud;

printf("\nEnter a Cost Price:");
scanf("%d",&cp);

printf("\nAre you Student  Yes or No?");
scanf("%s",&stud);

if(cp>500 && stud==Yes)
printf("\nYou got 10% discount!!:)\n");

else if(cp>500 && stud==No);
 printf("\nYou got 8% discount!!:)\n");

else
	 printf("\nYou got 2% discount!!:)\n");



}