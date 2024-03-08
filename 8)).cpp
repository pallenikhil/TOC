#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char string[100];
	printf("enter the string:");
	scanf("%s",string);
	if(string[0]=='a'&&string[strlen(string)-1]=='a')
	{
		for(i=0;i<strlen(string);i++)
		{
			if(string[i]=='0'||string[i]=='1')
			{
				printf("invalid..\n");
				return 0;
			}
		}
		printf("accepted\n");
	}
	else
	{
		printf("not accepted\n");
	}
	return 0;
}
