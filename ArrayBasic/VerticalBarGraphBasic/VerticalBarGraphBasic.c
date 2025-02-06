#include <stdio.h>
void main(){
    int N, max=0;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i=max;i>0;i--){
        for(int j=0;j<N;j++){
            if(arr[j]>=i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
