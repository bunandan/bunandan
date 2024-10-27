#include<stdio.h>
int main()
{
    unsigned int num=0x01234567;
    char *ptr=(char*)&num;
    if(*ptr==0x67);
    {
        printf("little endian\n");
    }
    else
    {
        printf("big endian\n");
    }
    return 0;
}
