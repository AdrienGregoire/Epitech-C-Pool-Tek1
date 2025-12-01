/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** return the number of characters
*/

#include <stdio.h>
void my_putchar(char c);
int my_strlen(char const *str)
{
    int n = 0;

    while (*str != '\0') {
        str += 1;
        n += 1;
    }
    return n;
}
