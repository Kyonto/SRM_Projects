#include <stdio.h>
int main()
{
  int r,c;
  printf("Enter size of the matrix(Row and Column)\n");
  scanf("%d",&r);
  scanf("%d",&c);
  int i,j;
  int m[r][c];
  printf("enter matrix\n");
  for(i=0;i<r;i++)
    {
      printf("Enter row %d \n: ",i);
  for(j=0;j<c;j++)
    {
      scanf("%d",&m[i][j]);
    }
      printf("\n");
    }
  
printf("Transpose matrix\n");
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
          printf("%d\t",m[j][i]);
        }
      printf("\n");
    }
  return 0;
  }
