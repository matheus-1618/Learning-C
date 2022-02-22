#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrix[100][100];
    int *p, *m, *f;
    p = &matrix[0][0];
    m = &matrix[0][0];
    //f = &matrix[0][0];
    for (int count = 0; count<(100*100);count++){
        *p=0;
        p++;
    }
    for (int i = 1; i<((100*100)+1);i++){
        *m=i;
        m++;
    }
    // for (int j = 1; j<((100*100)+1);j++){
    //     printf("%d\n",*f);
    //     f++;
    // }
    return  0;
}