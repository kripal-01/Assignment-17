//4. Write a program to convert a given string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[10]="KRipal";
//	printf("%s",strupr(a));
//	printf("%s",strupr(&a[0]));
//	printf("%s",strupr("kripal"));
for(i=0;a[i];i++)	
{
	if(a[i]>96 && a[i]<123)
	a[i]-=32;
}
printf("%s",a);
	return 0;
}
