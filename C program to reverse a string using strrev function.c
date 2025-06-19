#include<stdio.h>
#include<string.h>
int main()
{
    char inputarray[100];
    printf("enter a string to reverse:\n");
    gets(inputarray);
    strrev(inputarray);
    printf("reversed string is:%s\n",inputarray);
    return 0;
}
