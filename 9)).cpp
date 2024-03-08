#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	printf("enter the string:");
	scanf("%s",string);
	if(string[0]=='0'&&string[strlen(string)-1]=='1')
	{
		int i;
		for(i=0;i<strlen(string);i++)
		{
			if(string[i]<'0'||string[i]>'1')
			{
				printf("invalid!\n");
				return 0;
			}
		}
		printf("valid! the string starts with '0'and end with '1'.\n");
	}
	else
	{
		printf("invalid! the string doesnot start with '0' and end with '1'.\n");
	}
	return 0;
}
