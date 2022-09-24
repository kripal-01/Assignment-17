//10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>

int main()
{
	int i,j,c;
	char s1[30];
	char fri[250]={'\0'};
	fgets(s1,30,stdin);
	for(i=0;s1[i];i++)
	{
	
	fri[s1[i]]++;
	}
	for(i=0;i<250;i++)
	if(fri[i]!=0)
	printf("%c occur %d times\n\n",i,fri[i]);	
		
	
//	printf("%s",s1);
	return 0;
}
