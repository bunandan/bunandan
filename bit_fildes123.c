#include<stdio.h>
struct student
{
    int a:4;
    int b:7;
    int c:9;
}s;
int main()
{
    printf("%d",sizeof(s));
    return 0;
}
