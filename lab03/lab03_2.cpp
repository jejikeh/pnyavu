#include <iostream>
#include <cmath>


// task 2


float calc_func(float x){
    return (1 - (2 * (sin(x) * sin(x))))/(1 + sin(2*x));
}

int main()
{
    float x_max, x_min;
    printf("X min="); scanf_s("%f", &x_min);
    printf("X max="); scanf_s("%f", &x_max);

    float dx;
    printf("dx="); scanf_s("%f", &dx);

    float x;
    x = x_min;
    
    while( x <= x_max){
        printf(" X = %.5f | Y = %.5f\n", x ,calc_func(x));
        x += dx;
    }

}