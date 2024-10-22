/*#include<stdio.h>
int main()
{
    auto int i;
    {
        auto int i;
        {
            auto int i;
            printf("%d\n",i);
        }
        printf("%d\n",i);
    }
    printf("%d\n",i);
}*/
/*#include<stdio.h>
void fun()
{
    register int x=1;
    printf("%d\n",x);
    x+=1;
}
int main()
{
fun();
fun();
return 0;
}*/
#include<stdio.h>
int main()
{
    auto int i;
    {
        auto int i=10;
        printf("%d\n",i);

    }
    printf("%d\n",i);
}
