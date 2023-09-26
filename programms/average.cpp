#include <stdio.h>
int main()
{
    int a,s=0,c=0;
    do
    {
        printf("enter a number to find average of\n press 0 to quit the program");
        scanf("%d",&a);
        s++;
        c=c+a;
    }while(a!=0);
    
    printf("The average of %d numbers you entered is %d",s,c/s);
    return 0;
}
