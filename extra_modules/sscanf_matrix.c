#include <stdio.h>

int main(void){
    int array[9];
    int *p;
    p=array; 
    while (p!=(array+9)){
        printf("Entre com  o número: ");
        scanf("%d",p);
        p++;
    }
    
    for (int i=0;i<9;i++) {
        if ((i+1)%3==0){
            printf("%d\n",*(array+i));
        }
        else  {
            printf("%d ",*(array+i));
        }
        p++;
    }
    return 0;
}