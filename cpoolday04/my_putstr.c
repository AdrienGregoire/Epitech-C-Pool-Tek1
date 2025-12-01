/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** dysplay char of a str one-by-one
*/

#include <stdio.h>
void my_putchar(char c);
int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str += 1;
    }
    return 0;
}
