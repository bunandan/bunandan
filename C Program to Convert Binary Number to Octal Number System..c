#include <stdio.h>

int main() {
    /*Define an array of octal digits to binary */
    int octalDigitToBinary[8] = {0, 1, 10, 11, 100, 101, 110, 111};

    long binaryNumber, octalNumber = 0, binaryCopy;
    int threeDigits, multiple, counter;

    multiple = 1;

    /*
     * Take a binary number as input from user
     */
    printf("Enter a Binary Number\n");
    scanf("%ld", &binaryNumber);

    /*
     * Convert binary to octal number equivalent
     */
    while(binaryNumber != 0) {
        threeDigits = binaryNumber % 1000;
        /*Search through octalDigitToBinary array */
        for(counter = 0; counter < 8; counter++) {
            if(octalDigitToBinary[counter] == threeDigits) {
                octalNumber = (counter * multiple) + octalNumber;
                break;
            }
        }
        /* Remove last three digits */
        binaryNumber = binaryNumber/1000;
        multiple *= 10;
    }
    printf("Octal Mumber : %ld", octalNumber);

    return 0;
}
