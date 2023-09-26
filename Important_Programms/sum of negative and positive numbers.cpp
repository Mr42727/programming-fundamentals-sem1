#include <stdio.h>
int main()
{
    int a,sum1=0,n1=0,sum2=0,n2=0;
    printf("Enter Positive and negative numbers to display(0 for stop)\n");
    do
    {
        printf("Enter a Number\n");
        scanf("%d",&a);
        if(a>0)
        {
            printf(" you entered the positive number which is %d\n",a);
            n1++;
            sum1=sum1+a;
        }
        else
        {
            if(a<0)
        {
           printf(" you entered the number whic is negative %d\n",a);
            n2++;
            sum2=sum2+a; 
        }
        else
        {
            printf("you entered zero\n");
        }
        }
        
    }while(a!=0);
    printf("Total Postive Numbers you entered is %d\n",n1);
    printf("Total Negative Numbers you entered is %d\n",n2);
    printf("The sum of all positive numbers you entered is %d\n",sum1);
    printf("The sum of all Negative numbers you entered is %d\n",sum2);
    return 0;
}
