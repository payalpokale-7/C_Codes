/*/swapping 
#include<stdio.h>
void main()
{
int a,b;
printf("\nEnter 2 integers: ");
scanf("%d %d ", &a,&b);
printf("\nBefore swapping  a=%d b=%d",a,b);

a=a+b;
b=a-b;
a=a-b;

printf("\nAfter swapping  a=%d b=%d",a,b);

}
*/
#include<stdio.h>  
#include<stdlib.h>  
 int main()    
{    
int a=10, b=20;      
printf("Before swap a=%d b=%d",a,b);       
a=a*b;//a=200 (10*20)    
b=a/b;//b=10 (200/20)    
a=a/b;//a=20 (200/10)    
 
printf("\nAfter swap a=%d b=%d",a,b);       
return 0;  
}   
