#include <stdio.h>
void main(){
    int N, score1=0, score2=0;
    scanf("%d",&N);
    int team1[N], team2[N];
    for(int i=0;i<N;i++){
        scanf("%d",&team1[i]);
    }
    for(int i=0;i<N;i++){
        scanf("%d",&team2[i]);
    }
    for(int i=0;i<N;i++){
        if(team1[i]>team2[i]){
            score1 += 2;
        }
        else if(team1[i]<team2[i]){
            score2 += 2;
        }
        else{
            score1 += 1;
            score2 += 1;
        }
    }
    if(score1>score2){
        printf("Team 1 wins\n");
        printf("Score %d to %d",score1, score2);
    }
    else if(score1<score2){
        printf("Team 2 wins\n");
        printf("Score %d to %d",score2, score1);
    }
    else{
        printf("Draw game\n");
        printf("Score %d to %d",score1, score2);
    }
}
