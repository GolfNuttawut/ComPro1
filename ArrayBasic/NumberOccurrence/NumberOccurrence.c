#include <stdio.h>
void main(){
    int N, target, count=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&target);
    for(int i=0;i<N;i++){
        if(arr[i]==target){
            printf("%d ",i+1);
            count++;
        }
    }
    if(count==0){
        printf("0");
    }
}
