/*
** EPITECH PROJECT, 2024
** my_print_alpha
** File description:
** print alphabet
*/

#include <stdio.h>
void my_putchar(char c);

int my_print_alpha(void)
{
    char letter = 'a';

    for (; letter <= 'z'; letter++) {
        my_putchar(letter);
    }
    return 0;
}
