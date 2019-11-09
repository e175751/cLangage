#include<stdio.h>

double avg(double l, double m){
    double r = (l + m) /2.0;
    return r;
}

void main(){
    double d1,d2,d3;
    double a = 1.2,b = 3.4,c = 8.9;

    d1 = avg(a,b);
    d2 = avg(a,c);
    d3 = avg(b,c);

    printf("d1 = %f, d2 = %f, d3 = %f",d1,d2,d3);
}
