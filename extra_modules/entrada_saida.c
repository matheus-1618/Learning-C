#include <stdio.h>

int main(void){
    char *buffer;
    printf("Entre o nome");
    gets(buffer);
    printf("O Nome é:");
    puts(buffer);
    return 0;
}