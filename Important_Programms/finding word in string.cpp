#include<stdio.h>
#include<string.h>
int main()
{
	char string[100],word[20];
	int i,j,stringlen,wordlen,found;
	printf("enter a string");
	gets(string);
	printf("enter a word to find");
	gets(word);
	stringlen=strlen(string);
	wordlen=strlen(word);
	found =0;
	for(i=0;i<=stringlen-wordlen;i++)
	{
		for(j=i;j<i+wordlen;j++)
		if(string[j]!=word[j-i])
		break;
			}
			if(j==i+wordlen)
			{
				found=1;
				break;
			}
	}
	if(found)
	printf("%s is found in %s\n",word,string);
	else
	printf("not found");
	return 0;
}
