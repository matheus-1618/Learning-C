#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int number = 1618;
    int *pointer = &number;

    printf("%p",pointer);
    return 0;
}