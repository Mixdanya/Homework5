#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>


double Funkt();


int main()
{
    SetConsoleOutputCP(65001);
    double x, y;

    printf("Введите x: ");
    scanf("%lf", &x);

    printf("Введите y: ");
    scanf("%lf", &y);

    printf("F(%.6f, %.6f) = %.10f\n", x, y, Funkt(x, y));

    printf("F(-3, 0.0027) = %.10f\n", Funkt(-3.0, 2.7e-3));
    printf("F(0.0021, 10) = %.10f\n", Funkt(2.1e-3, 10.0));

    return 0;
}

double Funkt(double x, double y)
{
    double d = 1.0;

    return (pow(cos(y), 3) + pow(2.0, x) * d) /
        (exp(y) + log(pow(sin(x), 2) + 7.4));
}