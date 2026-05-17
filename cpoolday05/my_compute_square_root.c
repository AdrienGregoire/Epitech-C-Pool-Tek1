/*
** EPITECH PROJECT, 2024
** my_compute_square_root
** File description:
** return the square root
*/

#include <stdio.h>

int my_compute_square_root(int nb)
{
    int a = 1;

    if (nb < 1)
        return 0;
    while (a * a <= nb) {
        if (a * a == nb)
            return a;
        a++;
    }
    return 0;
}
