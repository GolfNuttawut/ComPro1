#include <stdio.h>
void main(){
    int water, sugar, waterUse, sugarUse, bottle;
    for(int i=0;i<7;i++){
        scanf("%d %d",&water, &sugar);
        waterUse = water/250, sugarUse = sugar/15;
        if(waterUse < sugarUse){
            bottle = waterUse;
        }
        else{
            bottle = sugarUse;
        }
        printf("%d", bottle);
        if(water-bottle*250 != 0){
            printf(" water");
        }
        printf("\n");
    }
}
