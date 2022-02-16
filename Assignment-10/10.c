#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[10] = {1,1,1,1,1,1,1,1,1,1};
    //sizeof(array) = da a quantidade total de bytes da array
    //sizeof(array[i]) = da a quantidade especifica de bytes de um elemento i qualquer
    //Logo, por serem do mesmo tipo, tem-se que a divisão do primeiro pelo segundo específica
    //a quantidade de elementos da array
    printf("The array has %d elements", sizeof(array) / sizeof(array[0]));

    return 0;
}