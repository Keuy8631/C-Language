#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1416

void show(double r){
    printf("radius:%5.2f\n", r);
}

double area(double r){
    show(r);
    return r*r*PI; // r*r = pow(r, 2.0)
}

double peri(double r){
    show(r);
    return 2*r*PI;
}

int main(){
    printf("area=%5.2f\n", area(2.2));
    printf("peri=%5.2f\n", peri(1.4));
}