/*
** EPITECH PROJECT, 2024
** my_isneg
** File description:
** if the number is negative, print N
*/

#include <stdio.h>
void my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    return 0;
}