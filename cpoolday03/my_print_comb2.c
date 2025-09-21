/*
** EPITECH PROJECT, 2024
** my_print_comb2
** File description:
** all the different combinations of two two-digit numbers
*/

#include <stdio.h>
void my_putchar(char c);

int my_print_comb(void)
{
    int a = 0;
    int b = 0;

    for (a = 0; a <= 98; a++) {
        for (b = a + 1; b <= 99; b++) {
            my_putchar((a / 10) + '0');
            my_putchar((a % 10) + '0');
            my_putchar(' ');
            my_putchar((b / 10) + '0');
            my_putchar((b % 10) + '0');
            if (!(a == 98 && b == 99)) {
                my_putchar(',');
                my_putchar(' ');
            }
        }
    }
    return 0;
}

//One major error coding style