#include <stdio.h>
void main(){
    int i = 0, odd = 0, oddSum = 0, even = 0, evenSum = 0;
    while(i < 8){
        int n;
        scanf("%d",&n);
        if(n%2==0){
            evenSum += n;
            even++;
        }
        else{
            oddSum += n;
            odd++;
        }
        i++;
    }
    if(odd > even){
        printf("odd\n%d\n%d",evenSum, oddSum);
    }
    else if(odd < even){
        printf("even\n%d\n%d",evenSum, oddSum);
    }
    else{
        printf("equal\n%d\n%d",evenSum, oddSum);
    }
}
