#include<stdio.h>

int main()

{

  int a,b,res;
  char c;
  printf ("Enter any one operator +, -, *, / n");
  scanf("%c", &c);
  printf ("n Enter two numbers n");
  scanf ("n %d n %d",&a, &b);
  switch(c)
  {
    case '+': res=a+b;
    printf("n The sum is %d",res);
    break;

    case '-': res=a-b;
    printf("n The difference is %d",res);
    break;

    case '*': res=a*b;
    printf("n The product is %d",res);
    break;

    case '/': res=a/b;
    printf("n The quotient is %d",res);
    break;

    default: printf ("n Invalid entry");
  }

  return 0;
};