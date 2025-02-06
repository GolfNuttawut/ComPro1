#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input");
    }
    else{
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    }
}
