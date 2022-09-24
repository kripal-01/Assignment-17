//3. Write a program to count vowels in a given string
#include<stdio.h>

int main()
{
	int i,j,c=0;
	char a[20]="AAttenasioon";
//	char b[10]={'a','e','i','o','u','A','E','I','O','U'};
char b[10]="aeiouAEIOU";
	for(i=0;a[i];i++)
	{
		for(j=0;b[j];j++)
		{
			if(a[i]==b[j])
		c++;
		}
		
	}
	printf("%d",c);
	
	
	return 0;
}
