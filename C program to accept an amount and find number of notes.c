#include <stdio.h>
int main()
{
    int number, i;
    int notes[7] = {1000, 500, 100, 50, 10, 5, 1};
    int noteCounter[7] = {0};
    printf("Enter a Number\n");
    scanf("%d",&number);

    for(i = 0; i < 7; i++) {
        if(number >= notes[i]){
            noteCounter[i] = number/notes[i];
            number = number - noteCounter[i]*notes[i];
        }
    }

    /* Print notes */
    printf("Currency   Count\n");
    for(i = 0; i < 7; i++){
        if(noteCounter[i] != 0){
            printf("%d  %d\n",notes[i],noteCounter[i]);
        }
    }
    return 0;
}
