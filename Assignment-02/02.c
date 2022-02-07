#include <stdio.h>

int main(){

    int a = 2;
    float c = 1.6;
    char word[] = "Matheus";
    printf("%d is a integer;\n%lf is a float;\n%s is a char.",a,c,*&word);

    return 0;

}