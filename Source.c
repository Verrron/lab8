#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <math.h>

int task_0();
int task_1();
int task_1A();
int task_2();
int task_3();

int main()
{
    //task_0();
    //task_1();
    //task_1A();
    //task_2();
    task_3();
}

int task_0()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int kk;
    char s1, s2;
    puts("Введите количество символов и два вида символов (например, 7 * %): ");
    scanf("%d %c %c", &kk, &s1, &s2);
    putchar('+');
    for (int start = 1; start <= kk; start++) {
        if (start <= kk/ 2)
        {
            putchar(s1);
            putchar('!');
        }
        else
        {
            putchar(s2);
            putchar('!');
        }
    }
    putchar('+');
}

int task_1()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int m, n;
    int s = 0;
    int k = 1;
    puts("Введите n, m: ");
    scanf("%d %d", &m, &n);
    for (int i = m; i >= n; i--)
    {
        s += i;
        printf("Выполнено %d раз\n", k++);
    }
    printf("Результат %d\n", s);
}

int task_1A()
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int m, i;
    int p = 1;
    puts("Введите степень m: ");
    scanf("%d", &m);
    for (int i = 0; i <= m; i++)
    {
        printf("2^%2d = %12d\n", i, p);
        p *= 2;
    }
    printf("Результат: %.1fK\n", (double)p/1024.0);
}

int task_2()
{
    // 8 вариант
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double start = 1.0;
    double end = 3.0;
    double st;
    double x, y;

    printf("Введите шаг табуляции (например, 0,5): ");
    scanf("%lf", &st);

    printf("\n------------------------\n");
    printf("|    x    |   f(x)     |\n");
    printf("|----------------------|\n");

    for (x = start; x <= end + 1e-9; x += st)
    {
        y = fabs(exp(x) - 2.0) - (x * x);
        printf("| %7.2f | %10.4f |\n", x, y);
    }
    printf("------------------------\n");
    return 0;
}

int task_3()
{
    // 8 вариант
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int N, k;
    printf("Введите целое число N: ");
    scanf("%d", &N);
    double sum_cos = 0.0;
    double sum_sin = 0.0;
    double res = 1.0;

    for (k = 1; k <= N; k++)
    {
        sum_cos = sum_cos + cos(k);
        sum_sin = sum_sin + sin(k);
        double drob = sum_cos / sum_sin;
        res = res * drob;
    }

    printf("Результат: %lf\n", res);
}