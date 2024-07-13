#include <stdio.h>
int main()
 {
    int n,i,j;
    for(int a=1;a<=3;a++)
    {
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = n; i>0; i--)
    {
        for (j = 1; j<n-i; j++)
        {
            printf(" ");
        }
        for (j = 1;j<=i; j++)
            if(i%2==1)
             {
            printf("%d ", j);
             }
        printf("\n");
    }
 }
}

/*#include <stdio.h>
int main()
 {
    int n,i,j;
    for(int a=1;a<=5;a++)
    {
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i<=n; i++)
    {
        for (j = 1; j <= n-i; j++)
        {
            printf(" ");
        }

        for (j = 1;j<=i; j++)
            if(i%2==1)
             {
            printf("%d ", j);
             }
        printf("\n");
    }
 }
}*/

