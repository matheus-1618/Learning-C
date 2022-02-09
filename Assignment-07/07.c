#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define squared 2.0
#define MIN 0.0001


float delta_solution(float a, float b, float c){
    float delta;
    delta = pow(b,squared)-4*a*c;
    return delta;
}

float formula(float x, float a, float b, float c){
    float final;
    final = a*pow(x,squared) +b*x +c;
    return final;
}

float positive_solution(float a, float b, float delta){
    float positive;
    positive = (-b + sqrt(delta))/(2*a);
    return positive;
}

float negative_solution(float a, float b, float delta){
    float negative;
    negative = (-b - sqrt(delta))/(2*a);
    return negative;
}

int main(){
    float a,b,c,delta;
    float positive;
    float negative;

    printf("Enter the value of variable 'A': ");
    scanf("%f", &a);
    printf("Enter the value of variable 'B': ");
    scanf("%f", &b);
    printf("Enter the value of variable 'C': ");
    scanf("%f", &c);

    delta = delta_solution(a,b,c);
    positive = positive_solution(a,b,delta);
    negative = negative_solution(a,b,delta);
    if ((formula(positive,a,b,c)<MIN)&& (formula(negative,a,b,c)<MIN)){
        printf("The solution using the '+' operator is: %f", positive);
        printf("\nThe solution using the '-' operator is: %f", negative);
    }
    else {
        printf("Something  is not right...");
    }
    
}