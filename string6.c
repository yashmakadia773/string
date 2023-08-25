#include<stdio.h>

main()
{
	char ch;
	
	printf("Enter character = ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("%c",ch);
	}	
	else
	{
		printf("%c",ch-32);
	}
	
}
