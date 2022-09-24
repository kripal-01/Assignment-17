//6. Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0;
	char a[10]="KriPAl";
//printf("%s",strrev(a));
for(i=0;a[i];i++)	
{
count++;
}
for(i=count;i>=0;i--)

	printf("%c",a[i]);
//printf("%s",a);
	return 0;
}
