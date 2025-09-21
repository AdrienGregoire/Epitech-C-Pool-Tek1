/*
** EPITECH PROJECT, 2024
** my_print_comb
** File description:
** the numbers composed by three different digits numbers
*/

#include <stdio.h>
void my_putchar(char c);

int my_print_comb(void)
{
    int a = 0;
    int b = 1;
    int c = 2;

    for (; c < 9 || a < 7 || b < 8; c++) {
        if (c > 9) {
            b++;
            c = b + 1;
        }
        if (b > 8) {
            a++;
            b = a + 1;
            c = b + 1;
        }
    my_putchar(a + '0');
    my_putchar(b + '0');
    my_putchar(c + '0');
    my_putchar(' ');
    }
    return 0;
}
