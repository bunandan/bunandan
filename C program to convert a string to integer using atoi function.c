#include <stdio.h>
#include <string.h>

int isAnagram(char *firstString, char *secondString);

int main(){
    char firstString[100], secondArray[100];
    printf("Enter first String \n");
    gets(firstString);

    printf("Enter second String \n");
    gets(secondArray);

    if(isAnagram(firstString, secondArray) == 1){
       printf("%s and %s are Anagram\n",firstString,secondArray);
    } else {
       printf("%s and %s are not Anagram\n",firstString,secondArray);
    }

    return 0;
}

int isAnagram(char *firstString, char *secondString){
    int firstCharCounter[256] = {0}, secondCharCounter[256] = {0};
    int counter;

    if(strlen(firstString) != strlen(secondString)){
        return 0;
    }

    for(counter = 0; firstString[counter] != '\0'; counter++){
        firstCharCounter[firstString[counter]]++;
    }

    for(counter = 0; secondString[counter] != '\0'; counter++){
        secondCharCounter[secondString[counter]]++;
    }

    for(counter = 0; counter < 256; counter++){
        if(firstCharCounter[counter] != secondCharCounter[counter])
            return 0;
    }
    return 1;
}
