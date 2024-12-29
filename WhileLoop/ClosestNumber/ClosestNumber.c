#include <stdio.h>
#include <limits.h>
int difference = INT_MAX;
void main(){
    int x , closestNumber;
    scanf("%d",&x);
    int i = 0;
    while(i < 8){
        int n;
        scanf("%d",&n);
        int calculate = x - n;
        if(calculate < 0){
            calculate *= -1;
        }
        if(calculate < difference){
            closestNumber = n;
            difference = calculate;
        }
        i++;
    }
    printf("%d",closestNumber);
}
