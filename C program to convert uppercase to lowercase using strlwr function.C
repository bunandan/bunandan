#include <stdio.h>
#include <string.h>

int main(){
    char inputString[100];
    int index;
    printf("Enter a String\n");
    gets(inputString);
    printf("String with all Lowercase characters\n");
    puts(strlwr(inputString));
    return 0;
}
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
            len--;
        }
    }
    str[len] = '\0';

    printf("After deleting the vowels, the string will be: %s\n", str);
    return 0;
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],len;
  printf("enter the string\n");
  //scanf("%s",&a);
  gets(a);
  len=strlen(a);
 printf("%d",len);
}*/
