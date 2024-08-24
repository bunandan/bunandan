#include<stdio.h>
int main()
{
    int x=10,y=20;
    fun(x,y);
    printf("x=%d , y=%d",x,y);
}
int fun(int x,int y)
{
    x=20;
    y=10;
}
