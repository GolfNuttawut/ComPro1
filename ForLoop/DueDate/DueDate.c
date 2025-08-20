#include <stdio.h>
void main(){
    int K, N, count=0, day=1;
    scanf("%d %d",&K, &N);
    for(int i=0;i<N;i++){
        int order;
        scanf("%d",&order);
        count += order;
        if(count > day*K*100){
            day = count/(K*100);
            if(count%(K*100)!=0){
                day++;
            }
        }
        printf("%d\n",day);
    }
}
