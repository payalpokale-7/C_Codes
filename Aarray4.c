 //WAP to check whether two matrtices are identical or not.
#include<stdio.h>
#define SIZE 3
int Identical(int M1[][SIZE],int M2[][SIZE])
{
int i = 0;
int j = 0;

for (i = 0; i < SIZE; i++)
{
for (int j = 0; j < SIZE; ++j)
{
    if (M1[i][j] != M2[i][j])
        return 0;
}
}
return 1;
}
int main()
{
int M1[SIZE][SIZE]={
{1,2,3},
{2,1,3},
{3,2,1},
};
int M2[SIZE][SIZE]={
{1,2,3},
{2,1,3},
{3,2,1},
};

if(Identical(M1,M2))
printf("Both matrices are Identical\n");
else
printf("Matrices are not Identical\n");
return 0;
}