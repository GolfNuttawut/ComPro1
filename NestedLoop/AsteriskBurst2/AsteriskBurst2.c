#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<4;j++){
            printf("*");
        }
        printf("\n");
    }
}
