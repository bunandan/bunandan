#include<stdio.h>

int main() {
    int i, j, rows;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++)
        {
        /* Printing spaces */
        /* Printing stars */
        for (j = 0;j < 2*(rows-i)-1; j++)
        {
            printf("*");
        }
    for (j = 0; j < i; j++)
         {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
