/*
** EPITECH PROJECT, 2024
** my_compute_factorial_it
** File description:
** return the factorial of the number
*/

#include <stdio.h>

int my_compute_factorial_it(int nb)
{
    int i = nb - 1;

    if (nb == 0)
        return 1;
    if (nb < 0 || nb > 12)
        return 0;
    for (; i > 0; i--)
        nb *= i;
    return nb;
}
