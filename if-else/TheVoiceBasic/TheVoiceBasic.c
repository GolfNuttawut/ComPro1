#include <stdio.h>
void main(){
    int K, K1, K2, S1, S2, G;
    scanf("%d %d %d %d %d %d",&K, &K1, &K2, &S1, &S2, &G);
    if(S1 > 8 && S2 > 8){
        if(G==1){
            if(K1<K){
                printf("1");
            }
            else{
                printf("2");
            }
        }
        else if(G==2){
            if(K2<K){
                printf("2");
            }
            else{
                printf("1");
            }
        }
    }
    else if(S1 > 8){
        if(K1 < K){
            printf("1");
        }
        else{
            printf("0");
        }
    }
    else if(S2 > 8){
        if(K2 < K){
            printf("2");
        }
        else{
            printf("0");
        }
    }
    else{
        printf("0");
    }
}
