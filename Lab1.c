#include <stdio.h>

int time()
{
    int N = 23;
    int K = 59;

    printf("Сейчас %d часа %d минут 00 секунд\n", N, K);
    printf("Идет %d минута суток\n", K);
    printf("До полуноси осталось %d часа и %d минут\n", N, K);
    printf("C 8.00 прошло %d секунд\n", K);
    printf("Текущий час = %d⁄24 суток и текущая минута = %d⁄60 часа\n", N, K);

    return 0;
}

int division()
{
    double L = 335;
    double n = 3;   
    int k = 4;
    int m = 2;

    printf("Дано:\n           %f\n         %f\n        _____\nОтвет:\n        %+1.15f \n", n, L, n/L);

    return 0;
}

int main()
{
    printf("1\n2\n3\n");

    printf("1\t\n 2\t\n  3\t\n");

    printf("%d, %d, %d\n", 1, 2, 3);

    printf("%10.5f\n ", 12.234657);

    printf("Остаток от деления %d на %d равен %d\n", 7, 5, 7%5);

    printf("Умножение %d на %d равно %d\n", 2000, 4, 2000*4);

    printf("%g разделить %e равно %f\n",5., 2., 5./2);

    time();
    division();
}