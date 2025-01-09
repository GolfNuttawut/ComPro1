#include <stdio.h>
void main(){
    int N, K, commentator1=0, commentator2=0;
    scanf("%d %d",&N, &K);
    for(int i=0;i<N;i++){
        int gender, score1, score2;
        scanf("%d %d %d",&gender, &score1, &score2);
        if(score1 > 8 && score2 > 8 && commentator1 < K && commentator2 < K){
           if(gender == 1){
                commentator1++;
                printf("%d %d\n",i+1, 1);
           }
           else{
                commentator2++;
                printf("%d %d\n",i+1, 2);
           }
        }
        else if(score1 > 8 && commentator1 < K){
            commentator1++;
            printf("%d %d\n",i+1, 1);
        }
        else if(score2 > 8 && commentator2 < K){
            commentator2++;
            printf("%d %d\n",i+1, 2);
        }
    }
}
