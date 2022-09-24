//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>

int main()
{
	int i,c=0;
	char a[20]="attension";
	char b='t';
	for(i=0;a[i];i++)
	{
		if(a[i]==b)
		c++;
	}
	printf("%d",c);
	
	
	return 0;
}
