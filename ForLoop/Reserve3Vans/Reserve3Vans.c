#include <stdio.h>
void main(){
    int N, vanA=0, vanB=0, vanC=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int day;
        scanf("%d",&day);
        if(vanA <= vanB && vanA <= vanC){
            vanA += day;
            printf("A\n");
        }
        else if(vanB <= vanC){
            vanB += day;
            printf("B\n");
        }
        else{
            vanC += day;
            printf("C\n");
        }
    }
}
