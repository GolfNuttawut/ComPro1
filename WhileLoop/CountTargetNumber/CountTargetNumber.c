#include <stdio.h>
void main(){
    int targetNumber , sameNumber = 0;
    scanf("%d",&targetNumber);
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0)break;
        if(n == targetNumber){
            sameNumber++;
        }
    }
    if(sameNumber > 0){
        printf("%d",sameNumber);
    }
    else{
        printf("None");
    }
}
