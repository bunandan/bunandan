#include <stdio.h>
#include <stdlib.h>

int main(){
    char inputString[20];
    printf("Enter a String\n");
    gets(inputString);

    printf("Integer: %d \n", atoi(inputString));

    return 0;
}
