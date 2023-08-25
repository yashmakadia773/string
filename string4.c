#include<stdio.h>

main()
{
	char ch[] = "BhArgAv";
	int i;
	
	for(i=0; i<=6; i++)
	{
		if(ch>='a' && ch<='z')
		{
			printf("%c",ch+32);
		}	
		else if(ch<='A' && ch>='Z')
		{
			printf("%c",ch-32);
		}
	}
	
}
