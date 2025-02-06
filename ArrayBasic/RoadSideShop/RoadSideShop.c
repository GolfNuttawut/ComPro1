#include <stdio.h>
void main(){
    int N, K, max=0;
    scanf("%d %d",&N, &K);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=K;i<N;i++){
        int sum = 0;
        for(int j=i-K;j<=i+K;j++){
            if(j==N){
                break;
            }
            sum += arr[j];
        }
        if(sum>max){
            max = sum;
        }
    }
    printf("%d",max);
}
