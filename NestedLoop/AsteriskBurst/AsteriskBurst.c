#include <stdio.h>
void main(){
    int R, C;
    scanf("%d %d",&R, &C);
    for(int row=0;row<R;row++){
        for(int col=0;col<C;col++){
            printf("*");
        }
        printf("\n");
    }
}
