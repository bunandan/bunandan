#include <stdio.h>

int main()
{
    int i, j, rows;

    printf("Enter Diamond Rows = ");
    scanf("%d", &rows);

    printf("Diamond Star Pattern\n");

    // Print the upper portion of the diamond
    for (i = 1; i <= rows; i++)
        {
        for (j = 1; j <= rows - i; j++)
         {
            printf(" ");
        }
        for (j = 1; j <= i * 2 - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Print the lower portion of the diamond
    for (i = rows-1; i > 0; i--)
        {
        for (j = 1; j <=rows - i; j++)
          {
            printf(" ");
          }
        for (j = 1; j <= i * 2 - 1; j++)
          {
            printf("*");
          }
        printf("\n");
        }

    return 0;
}

/*#include<stdio.h>
int main()
{
    int a,row;
    printf("enter the row\n");
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=row-1;i>0;i--)
    {
        for(int j=1;j<=row-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int rows,i,j;
    printf("enter the rows\n");
    scanf("%d",&rows);
    for(int i=1;i<rows;i++)
    {
        for(int j=1;j<=rows-i;j++)
    {
        printf(" ");
    }
        for(int j=1;j<=i*2-1;j++)
    {
        printf("*");
    }
    printf("\n");
    }
    for(int i=rows-1;i>0;i--)
    {
        for(int j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int rows,i,j;
    printf("enter the rows\n");
    scanf("%d",&rows);
    for(int i=1;i<rows;i++)
    {
        for(int j=1;j<=rows-i;j++)
        {
            printf(" ");

        }
        for(j=1;j<=i*2-1;j++)
        {
            printf("*");

        }
        printf("\n");
    }
    for(int i=rows-1;i>0;i--)
    {
        for(int j=1;j<=rows-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i*2-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
