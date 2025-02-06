#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        n *= -1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<i){
                printf("%d ",j%10);
            }
            else{
                printf("%d ",i%10);
            }
        }
        printf("\n");
    }
}
