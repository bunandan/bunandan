#include <stdio.h>
#include <string.h>

void sortString(char* inputString, char* outputArray);
int main(){
    char inputString[100], outputArray[100];

    printf("Enter a String \n");
    gets(inputString);

    sortString(inputString, outputArray);
    printf("Sorted string \n%s", outputArray);

    return 0;
}

void sortString(char* inputString, char* outputArray){
    int counterArray[256] ={0}, length, counter, index;
    length = strlen(inputString);

    for(counter = 0; counter < length; counter++){
        counterArray[inputString[counter]]++;
    }

    for(counter = 0, index = 0; counter < 256; counter++){
        if(counterArray[counter] != 0){
            while(counterArray[counter] > 0){
                outputArray[index++] = counter;
                counterArray[counter]--;
            }
        }
    }
    outputArray[index] = '\0';
}
