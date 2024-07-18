#include<stdio.h>
int main()
{
    int a[2][3]={{4,7,8},{6,9,7}};
    int a1[3][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            a1[j][i]=a[i][j];
        }
    }
    printf("enter matrix\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
    {
        printf("%d\t",a[i][j]);
    }
     printf("\n");
    }
    printf("transpose of a matrix\n");
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<2;j++)
            printf("%d\t",a1[i][j]);
            printf("\n");
    }
    printf("\n");
}
