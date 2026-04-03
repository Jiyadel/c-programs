#include<stdio.h>
int main(){
    int i,j,r,c;
    printf("enter the no. of rows and columns");
    scanf("%d%d",&r,&c);
    int matrix[r][c];
    int rowSum[r],colSum[c];
    printf("Enter elements of the matrix:|n");
    for (i=0;i<r;i++);{
        for (j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for (i=0;i,r;i++){
        for(j=0;j<c;j++){
            colSum[j]+=matrix[i][j];
        }
    }
    printf("\nSum of each row:\n");
    for(i=0;i<r;i++){
        printf("Row %d=%d\n",i+1,rowSum[i]);
    }
    printf("\nSum of each column:\n");
    for(j=0;j<c;j+++){
        printf("Column %d=%d\n",j+1, colSum[j]);
    }
    return 0;
}