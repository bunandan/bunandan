#include <stdio.h>

int main() {
    int month;
    printf("Enter Month Number\n");
    scanf("%d", &month);

    /* Input Validation */
    if(month < 1 || month > 12){
     printf("Invalid Input !!!!\n");
     return 0;
    }

    if(month == 2) {
        printf("28 or 29 Days in Month\n");
    } else if(month == 4 || month == 6 || month == 9 ||
        month == 11) {
        printf("30 Days in Month\n");
    } else if (month == 1 || month == 3 || month == 5 ||
        month == 7 || month == 8 || month == 10 || month == 12) {
        printf("31 Days in Month\n");
    }

    return 0;
}
