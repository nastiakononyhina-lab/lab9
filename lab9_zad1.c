#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Russian");

    // 1. Таблица Пифагора
    printf("Таблица Пифагора:\n");
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
            printf("%4d", i * j);
        printf("\n");
    }

    // 2. Только левый нижний треугольник
    printf("\nЛевый нижний треугольник:\n");
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%4d", i * j);
        printf("\n");
    }

    // 3. Вариант 11:
    // 6 5 4 3 2
    // 7 4 3 2
    // 8 3 2
    // 9 2
    // 2
    printf("\nВариант 11:\n");
    for (int i = 1; i <= 5; i++)
    {
        if (i == 5)
        {
            printf("%4d", 2);   // последняя строка в задании - одна цифра 2
        }
        else
        {
            printf("%4d", 5 + i);              // первое число строки
            for (int j = 6 - i; j >= 2; j--)   // дальше числа по убыванию до 2
                printf("%4d", j);
        }
        printf("\n");
    }

    return 0;
}
