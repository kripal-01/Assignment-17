//4. Write a program to convert a given string into lowercase
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[10]="KriPAl";
//	printf("%s",strlwr(a));
//	printf("%s",strlwr(&a[0]));
//	printf("%s",strlwr("kripal"));
for(i=0;a[i];i++)	
{
	if(a[i]<97 || a[i]>122)
	a[i]+=32;
}
printf("%s",a);
	return 0;
}
