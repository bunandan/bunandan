#include<stdio.h>
#include<string.h>
void main()
  {
      char str[20],rev[20],i,j,n;
      printf("Enter the string:");
      scanf("%s",str);
      n=strlen(str);
      printf("Length=%d",n);//n=7
      for(i=n-1,j=0;j<n;i--,j++)
       {
           rev[j]=str[i];
       }
      if(strcmp(str,rev)==0)
        printf("\nPALINDROME");
        else
    printf("\nNOT PALINDROME");
  }
  /*rev[0]=str[6];
  rev[1]=str[5];
  rev[2]=str[4];
  rev[3]=str[3];
  rev[4]=str[2];
  rev[5]=str[1];
  rev[6]*/

/*#include<stdio.h>
#include<string.h>
void main()
  {
      char str[20],rev[20],i,j,n,flag=0;
      printf("Enter the string:");
      scanf("%s",str);
      n=strlen(str);
      if((n%2)==0)
      {//even
            i=(n/2)-1;
            j=n/2;
      }
      else
      {
        //odd
     i=(n/2)-1;
      j=(n/2)+1;
      }
while(i>=0)
         {
             if(str[i]==str[j])
               {
                   i--;
                   j++;
               }
               else
               {
               flag=1;
               break;
               }
         }

     if(flag==0)
       printf("ITS PALINDROME");
     else
     printf("ITS NOT PALINDROME");
  }*/
