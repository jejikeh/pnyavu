#include <iostream>
#include <cmath>


//task 3


float calc_1(float x) {
    return -x - 2;
}

float calc_2(float x) {
    return  sqrt(1 - (( x + 1) * ( x + 1)));
}

float calc_3(float x) {
    return  1;
}

float calc_4(float x) {
    return  -x * 2 + 3;
}

float calc_5(float x) {
    return  -1;
}

int main() {
    float x;
    printf("X="); scanf_s("%f", &x);
    if (x <= -2) {
        printf("Y=%.5f\n", calc_1(x));
    }else if ( x > -2 && x <= -1 ){
        printf("Y=%.5f\n", calc_2(x));
    }else if ( x > -1 && x <= 1 ){
        printf("Y=%.5f\n", calc_3(x));
    }else if ( x > 1 && x <= 2 ){
        printf("Y=%.5f\n", calc_4(x));
    }else {
        printf("Y=%.5f\n", calc_5(x));
    }
}