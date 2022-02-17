#include <stdio.h>
#include <stdlib.h>

#define GAMES 4
#define PLAYERS 5


int main(void){
    int array[GAMES][PLAYERS];
    int averages[PLAYERS] = {0,0,0,0,0};
    float MAX = 0;
    int player;

    for (int i = 0; i<GAMES;i++){
        printf("\nGame #%d",i+1);
        for (int j = 0; j<PLAYERS;j++){
            printf("\nEnter scoring total for Player #%d:",j+1);
            scanf("%d",&array[i][j]);
        }
        for (int k = 0; k<PLAYERS;k++){
            averages[k]+=array[i][k];
        }
    }

    for (int j = 0; j<PLAYERS;j++){
            if (averages[j]>MAX) {
                MAX = averages[j];
                player = j+1;
            }
        }
    MAX = MAX / GAMES;
    printf("\nPlayer #%d had the highest scoring average at %f points per game.", player, MAX);
}