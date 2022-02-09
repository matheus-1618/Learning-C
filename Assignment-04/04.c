#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.142857

int main(){
    float radius;
    float area;
    
    printf("Enter the radius of your circle: ");
    scanf("%f",&radius);
    area = PI*pow(radius,2.0);
    printf("The area of your circle is %f", area);
}