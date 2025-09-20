/*
** EPITECH PROJECT, 2024
** my_print_revalpha
** File description:
** print alphabet in descending order
*/

#include <stdio.h>
void my_putchar(char c);

int my_print_revalpha(void)
{
    char letter = 'z';

    for (; letter >= 'a'; letter--) {
        my_putchar(letter);
    }
    return 0;
}
