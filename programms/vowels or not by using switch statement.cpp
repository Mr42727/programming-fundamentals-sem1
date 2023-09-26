#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a': 
        case 'A':    
        case 'e': 
        case 'E': 
        case 'i': 
        case 'I':  
        case 'o': 
        case 'O':   
        case 'U': 
        case 'u': 
          printf("this character is vowel");
		    break;
        default: 
            printf("Consonant");
    }

    return 0;
}