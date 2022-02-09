#include <stdio.h>

int main(){
    int in;
    int hours, minutes, seconds;

    printf("Enter the amount of seconds: ");
    scanf("%d", &in);
    hours = in/3600;
    minutes = (in%3600)/60;
    seconds = ((in%3600)%60);
    printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.",in,hours,minutes,seconds);

}