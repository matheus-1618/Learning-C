#include <stdio.h>
#include <stdlib.h>

int StrLen(char *string){
    int length = 0;
    while (*string){ // this is true because, when the pointer reach to "/0" it's return the end 
        length++;
        string++;
   }
    return length;
}

int main(){
    char *saida = "MATHEUS";
    int out = StrLen(saida);
    printf("The lenght is  %d",out);
    return 0;
}