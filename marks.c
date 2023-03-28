//else..if ladder
#include<stdio.h>
void main()
{
	int m;
	//m=marks
	printf("\nEnter Students marks ");
	scanf("%d", &m);
	if(m>=75)
	printf("\nYou got Distication!!");
    
	else if(m<75 && m>=65)
	printf("\nYou got first class!!");
      
	else if(m<65 && m>=55)
	 printf("\nYou got Second class!!");
    
	else if(m<55 && m>=45)
		printf("\nYou got Third class!!");
    
	else if(m<45 && m>=35)
	printf("\nPassed");
     
	else
	printf("\nFailed!!!!!!");
    
}
