#include <stdio.h>
void main(){
    int arr[501], count=0;
    for (int i=0;1;i++){
        int num;
        scanf("%d",&num);
        if(num<0 || num>9){
            break;
        }
        arr[i] = num;
        count++;
    }
    for(int i=0;i<count;i++){
        for(int j=0;j<count;j++){
            if(j>=count-i-1){
                printf("%d",arr[i]);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
