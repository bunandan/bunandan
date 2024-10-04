/*#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("enter the string\n");
    gets(a);
    strrev(a);
    printf("the reversed string is %s",a);
    return 0;
}*/
/* #include<stdio.h>
 int main()
 {
     char a[200],b[200],c[100];
     printf("enter the 1 st string\n");
     gets(a);
     printf("enter the 2 st string\n");
     gets(b);
     strcpy(c,a);
     strcpy(a,b);
     strcpy(b,c);
     printf("string before swapping:%s \nstring after swapping %s\n ",a,b);
 }*/


/*#include <stdio.h>
#include <string.h>
// Function to check if a character is a vowel
int isVowel(char ch)
 {
    ch = tolower(ch); // Convert to lowercase for case-insensitivity
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
 }

// Function to remove vowels from a string
void removeVowels(char str[])
 {
   int len = strlen(str);
    int j = 0; // Index for the modified string
    for (int i = 0; i < len; i++)
    {
        if (!(isVowel(str[i])))
         {
            str[j] = str[i];
            j++;
         }
    }
    str[j] = '\0'; // Null-terminate the modified string
}

int main()
{
    char inputString[100];

    printf("Enter a string: ");
    //scanf("%s", inputString);
     gets(inputString);
    removeVowels(inputString);

    printf("String after removing vowels: %s\n",inputString);

    return 0;
}*/


#include<stdio.h>
int main()
{
    int num,temp,count=0;
    printf("enter the digits\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    printf("number=%d,counts=%d\n",num,count);
    return 0;
}


