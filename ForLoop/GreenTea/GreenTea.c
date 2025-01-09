#include <stdio.h>
void main(){
    int water, sugar;
    for(int i=0;i<7;i++){
        scanf("%d %d",&water, &sugar);
        if(water/250 <= sugar/15){
            printf("%d ",water/250);
            water %= 250;
            if(water == 0){
                printf("\n");
            }
            else{
                printf("water\n");
            }
        }
        else{
            printf("%d ",sugar/15);
            water -= 250*(sugar/15);
            if(water == 0){
                printf("\n");
            }
            else{
                printf("water\n");
            }
        }
    }
}
