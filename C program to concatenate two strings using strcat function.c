#include<stdio.h>
#include<string.h>
int main()
{
    char source[100],destination[100];
    printf("enter the first number\n");
    gets(destination);
    printf("enter the second string\n");
    gets(source );
    strcat(destination ,source);
    printf("concatenated string %s\n",destination);
    return 0;

