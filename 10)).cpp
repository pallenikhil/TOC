#include<stdio.h>
int main()
{
	int n;
	int m;
	printf("enter the number of states:");
	scanf("%d",&n);
	printf("enter the number of transitions:");
	scanf("%d",&m);
	int transitions[3][3];
	for(int i=0;i<m;i++)
	{
		printf("enter trasition%d:",i+1);
		scanf("%d",&transitions[i][0]);
		char inputsymbol[2];
		scanf("%1s",inputsymbol);
		scanf("%d",&transitions[i][2]);
		if(inputsymbol[0]=='e')
		{
			transitions[i][1]='e';
		}
		else
		{
			transitions[i][1]=inputsymbol[0];
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("e-closure(%d):{%d",i,i);
		for(int j=0;j<m;j++)
		{
			if(transitions[j][0]==i&&transitions[j][1]=='e')
			{
				printf("%d",transitions[j][2]);
			}
		}
		printf("}\n");
	}
	return 0;	
}
