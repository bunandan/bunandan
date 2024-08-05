#include <stdio.h>
// Union to store the 4-byte hex number and access individual bytes
union HexNumber {
    unsigned int number;
    unsigned char bytes[4];
};

// Function to get the upper nibble of a byte
/*unsigned char get_upper_nibble(unsigned char byte)
 {
    return (byte / 16); // Equivalent to (byte >> 4) without using bitwise shift
}*/

// Function to get the lower nibble of a byte
unsigned char get_lower_nibble(unsigned char byte)
{
    return (byte % 16); // Equivalent to (byte & 0x0F) without using bitwise AND
}
// Function to get the upper nibble of a byte
unsigned char get_upper_nibble(unsigned char byte)
 {
    return (byte / 16); // Equivalent to (byte >> 4) without using bitwise shift
}

int main() {
    union HexNumber hexNum;
    unsigned int input;
    unsigned char upperNibbleSum = 0;
    unsigned char lowerNibbleSum = 0;

    // User input for the 4-byte hex number
    printf("Enter a 4-byte hex number (e.g., 0x12345678): ");
    scanf("%x", &input);

    // Store the input number in the union
    hexNum.number = input;

    // Print each byte and calculate the sums of the upper and lower nibbles
    printf("Separated bytes: ");
    for (int i = 4; i >-1; i--)
        {
        printf("0x%02X ", hexNum.bytes[i]);
        if (i < 3)
         {
            printf(", ");
        }

        // Add the upper nibble of the current byte
        upperNibbleSum += get_upper_nibble(hexNum.bytes[i]);

        // Add the lower nibble of the current byte
        lowerNibbleSum += get_lower_nibble(hexNum.bytes[i]);
    }
    printf("\n");

    // Print the sums of the upper and lower nibbles
    printf("Upper nibble addition: 0x%02X\n", upperNibbleSum);
    printf("Lower nibble addition: 0x%02X\n", lowerNibbleSum);

    return 0;
}

