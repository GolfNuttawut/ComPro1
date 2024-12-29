#include <stdio.h>
void main(){
    int previous, maxCountNumber, maxCount = 0, count = 0;
    while(1){
        int n;
        scanf("%d",&n);
        if(n == 0)break;
        if(n == previous){
            count++;
        }
        else{
        if(count > maxCount){
            maxCount = count;
            maxCountNumber = previous;
        }
            previous = n;
            count = 1;
        }
    }
    printf("%d\n%d",maxCount, maxCountNumber);
}
