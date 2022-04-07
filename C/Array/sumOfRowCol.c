#include <stdio.h>

int main ()
{
  int i, j, row, col,sumRow=0,sumCol=0;
  int m1[10][10];
  printf ("Enter row and col of matrix\n");
  scanf ("%d%d", &row, &col);
  printf ("Enter matrix\n");
  for(i=0;i<row;i++){
      for(int j=0;j<col;j++){
          scanf("%d",&m1[i][j]);
      }
  }
  for(i=0;i<row;i++){
      for(int j=0;j<col;j++){
          sumRow+=m1[i][j];
          sumCol+=m1[j][i];
      }
      printf("sumRow: %d\tsumcol: %d",sumRow,sumCol);
      printf("\n");
      sumCol=sumRow=0;
  }
 



  return 0;
}
