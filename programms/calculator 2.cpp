#include<stdio.h>
int main()
{
	int n1,n2;

	char opr;
	printf("type in your operation \n");
	scanf("%d%c%d",&n1,&opr,&n2);
	switch(opr)
	{
		case'+':
			printf(" result = %d \n",n1+n2);
			printf("This is the process of additon operation");
			break;
			case '-':
				printf("result = %d \n",n1-n2);
						printf("This is the process of subtraction");
				break;
				case'*':
					printf(" result = %d \n",n1*n2);
							printf("This is the process of multiplication");
					break;
					case'/':
						if(n2==0)
						printf("division by zero");
						else
						printf(" reult = %d \n",n1/n2);
							printf("This is the process of division");
							case'%':
								printf("result = %d \n",n1%n2);
								printf("process for reminder");
								break;
						
						default:
							printf("unknown operator");
							
	}
	return 0;
}