// lab01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
#include<math.h>

int main()
{
    float m,n;
    printf("M="); scanf_s("%f", &m);
    printf("N="); scanf_s("%f", &n);

    float z = ((m - 1 )*sqrt(m)-(n-1)*sqrt(n))/(sqrt(m*m*m*n) + n * m + m * m - m);
    printf("Z=%.5f\n", z);
    return 0;
}

int main1()
{
    float a;
    printf("C="); scanf_s("%f", &a);

    float z = (sin(4 * a) / (1 + sin(2 * a))) * (cos(2 * a) / (1 + cos(2 * a)));
    printf("Z=%.5f\n", z);
    return 0;
}