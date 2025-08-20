#include <stdio.h>
void main(){
    int i = 0, oddSum = 0, evenSum = 0;
    while(i < 8){
        int n;
        scanf("%d",&n);
        if(n%2==0){
            evenSum += n;
        }
        else{
            oddSum += n;
        }
        i++;
    }
    if(oddSum > evenSum){
        printf("odd\n%d\n%d",evenSum, oddSum);
    }
    else if(oddSum < evenSum){
        printf("even\n%d\n%d",evenSum, oddSum);
    }
    else{
        printf("equal\n%d\n%d",evenSum, oddSum);
    }
}
