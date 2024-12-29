//Use break;
#include <stdio.h>
void main(){
    int count = 0;
    while(1){
        int n;
        scanf("%d",&n);
        if(n==0){
            break;
        }
        count++;
    }
    printf("%d",count);
}


// Don't use break;
/*
#include <stdio.h>
void main(){
    int count = 0, status = 1;
    while(status != 0){
        int n;
        scanf("%d",&n);
        if(n==0){
            status = 0;
        }
        else{
           count++;
        }
    }
    printf("%d",count);
}
*/
