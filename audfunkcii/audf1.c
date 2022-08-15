#include <stdio.h>
#define pi 3.14

double dijametarKrug(double radius){
    return 2*radius;
}

double perimetarKrug(double radius){
    return 2*radius*pi;
}

double plostinaKrug(double radius){
    return radius*radius*pi;
}

int main(){

    double radius;
    scanf("%lf", &radius);

    double D=dijametarKrug(radius);
    double L=perimetarKrug(radius);
    double P=plostinaKrug(radius);

    printf("%.2lf %.2lf %.2lf", D, L, P);

    return 0;
}