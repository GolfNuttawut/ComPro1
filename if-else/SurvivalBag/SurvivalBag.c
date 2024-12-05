#include <stdio.h>
void main(){
    int x, y, z, bag, leftX, leftY, leftZ;
    scanf("%d %d %d",&x, &y, &z);
    if(x/3 <= y/4 && x/3 <= z/2){
        bag = x/3;
    }
    else if(y/4 <= x/3 && y/4 <= z/2){
        bag = y/4;
    }
    else{
        bag = z/2;
    }
    printf("%d %d %d %d",bag, x-(bag*3), y-(bag*4), z-(bag*2));
}
