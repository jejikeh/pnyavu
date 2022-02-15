
#include <iostream>
#include <cmath>


// task 1


int main()
{
    float x, y;
    printf("X="); scanf_s("%f", &x);
    printf("Y="); scanf_s("%f", &y);

    if (x > -1 && x < 1.5 && y > -0.5 && y < 4) {
        printf("yes");
        return 0;
    }
    else {
        printf("no");
        return 0;
    }
}