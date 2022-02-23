#include <stdio.h>


void levetor(int *vet, int dimensao){
    for (int i=0;i<dimensao;i++){
        printf("\nPreencha o %d elemento: ",i+1);
        scanf("%d",vet);
        vet++;
    }
}

void escreve_vetor(int *vet, int dimensao){
    printf("The vector is:\n[");
    for (int i=0;i<dimensao;i++){
        printf("%d ",*vet);
        vet++;
    }
    printf("]\n");
}

int main(void){
    int vetor[5];
    levetor(vetor,5);
    escreve_vetor(vetor,5);
    return 0;
}
