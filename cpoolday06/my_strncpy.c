/*
** EPITECH PROJECT, 2024
** my_strncpy
** File description:
** copie n characters from a string into another
*/

#include <stdio.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; i <= n && dest[i] != n; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
