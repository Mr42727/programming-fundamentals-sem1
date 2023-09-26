#include <stdio.h>
int main()
{
    int r1=0,r2=0,c1=0,c2=0,i=0,j=0,r3=0,c3=0;
    int arr1[r1][c1];
    int arr2[r2][c2];
    int arr3[r3][c3];
    printf("Enter total number of rows in 1st Matrix");
    scanf("%d",&r1);
    printf("Enter total number of columns in 1st Matrix");
    scanf("%d",&c1);
    printf("Start Entering your Elements of the 1st Matrix");
    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c1; j++)
      {
        scanf("%d",&arr1[i][j]);
      }
    }
    printf("The 1st Matrix you have Entered is:\n");
    for (i = 0; i < r1; i++)
    {
      for (j = 0; j < c1; j++)
      {
        printf("%d\t",arr1[i][j]);
      }
      printf("\n");
    }
    printf("Enter total number of rows in 2nd Matrix");
    scanf("%d",&r2);
    printf("Enter total number of columns in 2nd Matrix");
    scanf("%d",&c2);
    printf("Start Entering your Elements of the 2nd Matrix");
    for (i = 0; i < r2; i++)
    {
      for (j = 0; j < c2; j++)
      {
        scanf("%d",&arr2[i][j]);
      }
    }
    printf("The 2nd Matrix you have Entered is:\n");
    for (i = 0; i < r2; i++)
    {
      for (j = 0; j < c2; j++)
      {
        printf("%d\t",arr2[i][j]);
      }
      printf("\n");
    }
    if(c1==r2)
    {
        r3=r1;
        c3=c2;
       for (i = 0; i < c1; i++)
    {
       for (j = 0; j < r2; j++)
        {
            arr3[i][j] = 0;
        }//Assigning every Element of resulting martix to Zero As we have to add that elements
    }
        for (i = 0; i < r3; i++)
    {
      for (j = 0; j < c3; j++)
      {
        for (int k = 0; k < c1; k++)
        {
          
          arr3[i][j]=arr3[i][j] + arr1[i][k] *arr2[k][j];
        }
      }
    }
        printf("The Resultant Matrix is\n");
        for (i = 0; i < r1; i++)
        {
          for (j = 0; j < c2; j++)
          {
            printf("%d\t",arr3[i][j]);
          }
          printf("\n");
        }
    }
    else
    {
      printf("Matrices are not Comfortable for multiplication :( Try another one");
    }
    return 0;
}
