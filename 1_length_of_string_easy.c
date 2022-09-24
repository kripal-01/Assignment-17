// String Basics in C Language
// 1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    int i,count=0;
    char a[10];
    printf("enter string\n");
    fgets(a,10,stdin);
    for(i=0;a[i];i++)
    {

    }
    printf("size is %d",i-1);
    return 0;
}


