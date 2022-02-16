#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (!(argc<3 || argc>3)){
        printf("Hello, %s %s",argv[1],argv[2]);
    }
    else{
        printf("Usage: ./nineth Firstname Lastname#");
    }
    return 0;

}