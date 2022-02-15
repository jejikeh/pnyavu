#include <iostream>
#include <cmath>


// task 2


int calc(float r1, float r2){

        float x, y;
        printf("X="); scanf_s("%f", &x);
        printf("Y="); scanf_s("%f", &y);

        float r = sqrt(x * x + y * y);

        if (( r <= r1 && x <= 0 && y >= 0 ) || (r <= r2 && r >= r1 && y < 0 && x > 0  )) {
            printf("yes\n");
            return 0;
        }
        else {
            printf("no\n");
            return 0;
        }

}


int main()
{
    float r1, r2;
    printf("R1="); scanf_s("%f", &r1);
    printf("R2="); scanf_s("%f", &r2);

    for (int i = 0; i < 10; i++ ){
        calc(r1,r2);
    }

}