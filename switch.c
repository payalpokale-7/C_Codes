#include<stdio.h>
void main()
{
    int a,b,ch;
    
    printf("\n Enter 2 nos\n1.Add\n2.Sub\n3.Mul\n4.Div\n");
    scanf("%d%d%d", &ch,&a,&b);

    switch (ch)
    {
    case /* constant-expression */1:
        printf("Add=%d",(a+b));
        break;
    case /* constant-expression */2:
        printf("Sub=%d",(a-b));
        break;
    case /* constant-expression */3:
        printf("Mul=%d",(a*b));
        break;
    case /* constant-expression */4:
        printf("Div=%d",(a/b));
        break;
    
    default:
    printf("Invalid");
        break;
    }
}