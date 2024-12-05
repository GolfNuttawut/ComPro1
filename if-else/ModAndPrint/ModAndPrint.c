#include <stdio.h>
void main(){
    int num;
    scanf("%d",&num);
    if(num%5==0 && num%3==0){
        printf("3 5");
    }
    else if(num%5==0){
        printf("5");
    }
    else if(num%3==0){
        printf("3");
    }
}
