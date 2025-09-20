/*
** EPITECH PROJECT, 2024
** my_print_digits
** File description:
** print all digits
*/

#include <stdio.h>
void my_putchar(int n);

int my_print_digits(void)
{
    char number = '0';

    for (; number <= '9'; number++) {
        my_putchar(number);
    }
    return 0;
}
