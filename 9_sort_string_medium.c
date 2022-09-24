//9. Write a C program to sort a string array in ascending order
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], chTemp;
    int i, j, len;
    printf("Enter any string: ");
    gets(str);
    len = strlen(str);
    for(i=0; str[i]; i++)
    {
        for(j=i+1; str[j]; j++)
        {
            if(str[i]>str[j])
            {
                chTemp = str[i];
                str[i] = str[j];
                str[j] = chTemp;
            }
        }
    }
    printf("\nSame string in ascending order:\n%s", str);
    getch();
    return 0;
}
