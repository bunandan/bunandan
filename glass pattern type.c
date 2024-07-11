#include<stdio.h>
void main()
 {
     int n=11,i,j,space,h;
     h=(n+1)/2;//h=4
     for(i=1;i<=h;i++)
       {
         for(j=1;j<=i;j++)
           printf("*");
         for(space=1;space<=n-2*i+1;space++)
           printf(" ");
           for(j=1;j<=i;j++)
           printf("*");

         printf("\n");
       }
int r=n-h;
    for(i=1;i<=n-h;i++)
     {
       for(j=r;j>0;j--)
         printf("*");
    for(space=1;space<=2*i;space++)
        printf(" ");
          for(j=r;j>0;j--)
         printf("*");
    r--;
    printf("\n");
     }

 }
