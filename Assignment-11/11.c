#include <stdio.h>

//estudar o código da solução apresentada pelas funções de armazenamento utilizada
int main(void) {
    float average_counter = 0;
    float average = 0;
    int counter = 0;
    char entrada[] = "Y";

    while (strcmp(&entrada,"Y")==0){
        printf("Enter a test score: ");
        scanf("%f",&average_counter);
        average += average_counter;
        counter++;
        printf("Would you like to continue? Y/N ");
        scanf("%s", &entrada);
    }
    if (counter != 0){
        printf("%f is the average.",average/counter);
    }
    return 0;
}