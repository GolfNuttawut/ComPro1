#include <stdio.h>
void main(){
    int nRow, nCol;
    scanf("%d %d",&nRow, &nCol);
    for(int i=1;i<=nRow;i++){
        for(int j=i;j<nCol+i;j++){
            printf("%d",j%10);
        }
        printf("\n");
    }
}
