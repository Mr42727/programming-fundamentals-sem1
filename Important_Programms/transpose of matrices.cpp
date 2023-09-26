#include <stdio.h>
int main()
{
int row,col;
int i, j, value;
int mat[10][10], transp[10][10];
printf("\n Input the number of rows:");
scanf("%d, &row");
printf("Input number of cols:");
scanf("%d”, &col");
for(i = 0 ; i < row; i++)
for(j = 0 ; j < col; j++)
{
printf("Input Value for : %d: %d:", i+1,j+1);
scanf("%d, &value");
mat[i][j] = value;
}
printf("\n Entered Matrix is as follows:\n");
for(i = 0; i < row; i++)
{
for(j = 0; j < col; j++)
printf("%d", mat[i][j]);
printf("\n");
}
for(i = 0; i< row; i++)
{
for(j = 0; j < col; j++)
{
transp[i][j]= mat[j][i];
}
}
printf("\n Transpose of the matrix is as\
follows:\n");
for(i = 0; i < col; i++)
{
for(j = 0; j < row; j++)
{
printf("%d", transp[i][j]);
}
printf("%d");
}
return 0;
}
