#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	printf("enter string:");
	scanf("%s",string);
	if(string[0]=='0'&&string[strlen(string)-1]=='1')
	{
	    printf("accepted");
    }
	else
	{	
		printf("not accepted");	
	}
}
