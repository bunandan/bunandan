#include<stdio.h>
#include<string.h>

int main() {

    char inputString[100], leftHalf[100], rightHalf[100];
    int length, mid, i, k;

    printf("Enter a string\n");
    gets(inputString);

    length = strlen(inputString);

    mid = length/2;

    for(i = 0; i < mid; i++) {
        leftHalf[i]= inputString[i];
    }
    leftHalf[i] = '\0';

    for(i = mid, k = 0; i <= length; i++, k++) {
        rightHalf[k]= inputString[i];
    }

    printf("Left half : %s\n",leftHalf);
    printf("Right half : %s\n",rightHalf);

    return 0;
}
