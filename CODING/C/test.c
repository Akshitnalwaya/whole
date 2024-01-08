#include<stdio.h>
int main()	
{	
	char s[50];
	for (int  i = 0; i < 5; i++)
	{
		scanf("%c",&s[i]);
	}
	for (int  i = 0; i < 5; i++)
	{
		if (s[i]!=')')
		{
			
			printf("%c",s[i]);
		}
	}
	// int a,*P;
	// P=&a;
	// printf("%d\t%d",P,P+1);  -------------> pointerss
	}