/*
** EPITECH PROJECT, 2024
** my_compute_power_it
** File description:
** return the first argument raised to the power
*/

#include <stdio.h>

int my_compute_power_it(int nb, int p)
{
    int i = 1;
    int pow = nb;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    for (; i < p; i++)
        nb = nb * pow;
    return nb;
}
