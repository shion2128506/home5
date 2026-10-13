#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

void option16();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RUS");
    option16();
}

void option16()
{
    double x = -2.235e-2;
    double y = 2.23;
    double z = 15.221;

    double w = cbrt(x * x * x * x * x * x + log(y) * log(y)) + exp(fabs(x - y)) * pow(fabs(x - y), x + y) / (atan(x) + atan(z));

    printf("x = %.5lf\n", x);
    printf("y = %.5lf\n", y);
    printf("z = %.5lf\n", z);
    printf("-----------------------\n");
    printf("w = %.5lf\n", w);

    return 0;
}