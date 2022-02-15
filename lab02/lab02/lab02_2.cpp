#include <iostream>
#include <cmath>


// task 2


int main()
{
    float r1, r2;
    printf("R1="); scanf_s("%f", &r1);
    printf("R2="); scanf_s("%f", &r2);

    float x, y;
    printf("X="); scanf_s("%f", &x);
    printf("Y="); scanf_s("%f", &y);

    float r = sqrt(x * x + y * y);

    if (( r <= r1 && x <= 0 && y >= 0 ) || (r <= r2 && r >= r1 && y < 0 && x > 0  )) {
        printf("yes");
        return 0;
    }
    else {
        printf("no");
        return 0;
    }
    
}

