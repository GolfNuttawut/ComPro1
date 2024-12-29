#include <stdio.h>
void main(){
    int x, y;
    scanf("%d %d",&x, &y);
    if(x>y){
        int i = x;
        while(i>=y){
            printf("%d ",i);
            i--;
        }
    }
    else{
        int i = x;
        while(i<=y){
            printf("%d ",i);
            i++;
        }
    }
}
