/*#include<stdio.h>
int main()
{
    int a;
    for(int i=0;i<200;i++)
    {
        printf("sorry\t");
    }
    return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,len;
    printf("enter the string\n");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U');
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
            i--;
            len--;
        }
    }
  printf("after deleting vowels the string will be %s\n",str);
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,len;
    printf("enter the string\n");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
            i--;
            len--;
        }
        printf("after deleting the vowels the given string will be %s\n",str);
        return 0;
    }
}*/


#include <stdio.h>
int main() {
    //int n[80]={5,25,120,235,62,53};
      // int n;
   /* printf("Enter the number of members in the auditorium: ");
    scanf("%d", &n);*/

    int heights[6]={5,25,120,235,62,53};
    //printf("Enter the height of each member (in centimeters):\n");
    for (int i = 0; i < 6; ++i)
        {
       // scanf("%d", &heights[i]);
       printf("%d\n",heights[i]);
    }

    // Sort the heights in ascending order
    for (int i = 0; i < 6- 1; ++i) {
        for (int j = i + 1; j < 6; ++j) {
            if (heights[i] > heights[j]) {
                int temp = heights[i];
                heights[i] = heights[j];
                heights[j] = temp;
            }
        }
    }

    printf("\nArranged seating based on height:\n");
    for (int i = 1; i < 6; ++i) {
        printf("%d\n", heights[i]);
    }
    printf("\n");

    return 0;
}
