#include<math.h>
#define PI 3.1416

void show(double r);

double area(double r){
    show(r);
    return r*r*PI; // r*r = pow(r, 2.0)
}