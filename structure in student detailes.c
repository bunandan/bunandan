/*#include<stdio.h>
int main()
{
     char a=126;
    printf("%d",a);
}*/

#include<stdio.h>
struct student
{
    int roll;
    char name[26];
    float percentage;
};
int main()
{
    struct student s1={1,"nandan",89.25};
    struct student s2={2,"bhima",79.26};
    printf("student s1 info\n");
    printf("%d %s %f\n",s1.roll,s1.name,s1.percentage);
    printf("student s2 info\n");
    printf("%d %s %f\n",s2.roll,s2.name,s2.percentage);
    return 0;
}
