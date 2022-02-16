#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int n;
    int head = 0, tails = 0;
    srand(time(NULL)); // variando o printf a cada execução
    printf("How many times would you like to flip the coin? ");
    scanf("%d",&n);

    for (int i=0; i<n; i++){
        if (rand() % 2 == 1){
            head++;
        }
        else {
            tails++;
        }
    }
    printf("After flipping the coin %d times, the results were\n%d heads\n%d tails",n,head,tails);
    return 0;

}