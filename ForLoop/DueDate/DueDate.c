#include <stdio.h>
void main(){
    int K, N, count=0, day=1;
    scanf("%d %d",&K, &N);
    for(int i=0;i<N;i++){
        int order;
        scanf("%d",&order);
        count += order;
        if(count <= K*100){
            printf("%d\n",day);
        }
        else{
            day += count/(K*100);
            count %= K*100;
            printf("%d\n",day);
        }
    }
}
