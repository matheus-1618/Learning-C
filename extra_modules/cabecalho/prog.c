#include <stdio.h>
#include "func.h"

int main (){
    int a,b;
    printf ("Entre com numero: ");
    scanf ("%d",&a);
    printf ("\nEntre com numero: ");
    scanf ("%d",&b);
    if (EDivisivel(a,b)){
        printf ("\n\nO numero e par.\n");
    }
    else {
        printf ("\n\nO numero e impar.\n");
    }
    return 0;
} 