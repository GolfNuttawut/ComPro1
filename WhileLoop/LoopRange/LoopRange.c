#include <stdio.h>
void main(){
    int x,y;
    scanf("%d %d",&x, &y);
    if(x>y){
       printf("Invalid input");
    }
    else{
        int k = x;
        while(k<=y){
            printf("%d ",k);
            k++;
        }
    }
}
