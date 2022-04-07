#include <stdio.h>

int
main ()
{
  int i, j, row, col;
  int m1[10][10];
  printf ("Enter row and col for first matrix\n");
  scanf ("%d%d", &row, &col);
  printf ("Enter matrix\n");
  for(i=0;i<row;i++){
      for(int j=0;j<col;j++){
          scanf("%d",&m1[i][j]);
      }
  }
  for(i=0;i<col;i++){
      for(int j=0;j<row;j++){
          printf("%d ",m1[j][i]);
      }
      printf("\n");
  }
 



  return 0;
}
