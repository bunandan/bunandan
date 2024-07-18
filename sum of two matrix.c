#include<stdio.h>
int main()
{
  int sum=0;
  int a[2][2]={{5,5},{3,4}};
  int b[2][2]={{1,2},{4,5}};
  for(int i=0;i<2;i++)
  {
      for(int j=0;j<2;j++)
      {
          sum=a[i][j]+b[j][i];
          printf("%d\t",sum);
      }
      printf("\n");
  }
  return 0;
}
