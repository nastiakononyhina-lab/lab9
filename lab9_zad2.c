#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

// Вариант 11: равна ли сумма первой и второй половины цифр числа.
// Если цифр нечётное количество, средняя цифра не считается.

int main()
{
    setlocale(LC_ALL, "Russian");

    long long n, m;
    long long s1, s2;   // суммы первой и второй половины
    int k, i;
    char a;

    do
    {
        printf("Введите число: ");
        scanf("%lld", &n);

        // считаем количество цифр
        k = 0;
        m = n;
        while (m > 0)
        {
            k++;
            m = m / 10;
        }

        // раскладываем число на цифры справа налево
        s1 = 0;
        s2 = 0;
        m = n;
        i = 0;
        while (m > 0)
        {
            if (i < k / 2)
                s2 = s2 + m % 10;      // вторая половина (правая)
            if (i >= k - k / 2)
                s1 = s1 + m % 10;      // первая половина (левая)
            m = m / 10;
            i++;
        }

        if (s1 == s2)
            printf("Суммы равны: %lld и %lld\n", s1, s2);
        else
            printf("Суммы не равны: %lld и %lld\n", s1, s2);

        printf("Продолжить? (Да - y, нет - n): ");
        scanf(" %c", &a);
    } while (a != 'n');

    return 0;
}
