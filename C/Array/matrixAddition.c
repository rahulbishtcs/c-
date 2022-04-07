#include <stdio.h>

int main()
{
    int i,j,row1,col1,row2,col2;
    int m1[10][10],m2[10][10],m3[10][10];
    printf("Enter row and col for first matrix\n");
    scanf("%d%d",&row1,&col1);
    printf("Enter row and col for second matrix\n");
    scanf("%d%d",&row2,&col2);
    if(row1==row2 && col1==col2){
        printf("Enter 1 matrix\n");
        for(i=0;i<row1;i++){
            for(j=0;j<col1;j++){
                scanf("%d",&m1[i][j]);
            }
        }
        printf("Enter 2 matrix\n");
        for(i=0;i<row2;i++){
            for(j=0;j<col2;j++){
                scanf("%d",&m2[i][j]);
            }
        }
        for(i=0;i<row2;i++){
            for(j=0;j<col2;j++){
                m3[i][j] = m1[i][j] + m2[i][j];
            }
        }
        for(i=0;i<row2;i++){
            for(j=0;j<col2;j++){
                printf("%d",m3[i][j]);
            }
            printf("\n");
        }
        
    }else{
        printf("Dimension not same");
    }
    
   
    return 0;
}
