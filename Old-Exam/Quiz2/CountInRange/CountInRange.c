#include <stdio.h>
void main(){
    int x, y;
    scanf("%d %d",&x, &y);
    int between = 0, lessThan = 0, greaterThan = 0;
    while(1){
        int num;
        scanf("%d",&num);
        if(num==0){
            break;
        }
        if((x < num && num < y) || (y < num && num < x)){
            between++;
        }
        else if(num < x && num < y){
            lessThan++;
        }
        else if(num > x && num > y){
            greaterThan++;
        }
    }
    printf("%d\n%d\n%d",between, lessThan, greaterThan);
}
