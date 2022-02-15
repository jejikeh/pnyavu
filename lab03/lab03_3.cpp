#include <iostream>
#include <cmath>


// task 3

double func(double x, int n){
    return (pow((x - 1),(2 * n + 1))) / ((2 * n + 1) * pow((x + 1),( 2 * n + 1)));
}

int main(){

    float x;
    double x_min;
    double y;

    x = 0;

    float dx, esp, x_max;
    int n = 0;
    printf("DX="); scanf_s("%f", &dx);
    printf("ESP="); scanf_s("%f", &esp);
    printf("N="); scanf_s("%f", &n);

    float res, l_res;

    l_res = 0;

    for(int i = 0; i < n ; i++){
        x += dx;
        int t = 1;

        printf("X = %.5f\n", (pow((x - 1),(2 * t + 1))) / ((2 * t + 1) * pow((x + 1),( 2 * t + 1))));

    }

}