#include <stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    int space=N/2, star=1;
    for(int row=0;row<N/2+1;row++){
        for(int col=0;col<space;col++){
            printf(" ");
        }
        for(int col=0;col<star;col++){
            printf("*");
        }
        printf("\n");
        space--, star+=2;
    }
    space = 1, star = N-2;
    for(int row=N/2+1;row<N;row++){
        for(int col=0;col<space;col++){
            printf(" ");
        }
        for(int col=0;col<star;col++){
            printf("*");
        }
        printf("\n");
        space+=1, star-=2;
    }
}
