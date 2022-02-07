#include <stdio.h>
#include <stdlib.h>

void main(){
    char *first;
    char *last;
    printf("Enter your first name: ");
    scanf("%s", &first);
    printf("\nEnter your last name: ");
    scanf("%s", &last);
    printf("Hello %s %s!", &first, &last);
    free(first);
    free(last);
}