//7. Write a program in C to count the total number of alphabets, digits and special 
//characters in a string.
#include<stdio.h>
int main()
{
	int i,alp=0,dig=0,spe=0;
	char a[20];
	fgets(a,20,stdin);
	for(i=0;a[i];i++)
	{
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
		alp++;
		else if(a[i]>=48&&a[i]<=57)
		dig++;
		else
		spe++;
		
	}
	printf("\nalphabet no. is %d",alp);
	printf("\ndigit no. is %d",dig);
	printf("\nspecial character no. is %d",spe-1);
	
	return 0;
}

