#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	
	//first method by switch
	/*
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("vowels");
		break;
		default:
			printf("consonants");
		
	    
		}
		*/
		
		
		
		
		
		// by if and else method 
		
		
		if(ch=='a','e','i','o','u')
	    {
		printf("vowels");
		}
	    else{
	    	printf("consonants");
		}
	    
		
}
