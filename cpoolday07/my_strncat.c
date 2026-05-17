/*
** EPITECH PROJECT, 2024
** my_strncat
** File description:
** concatenate n characters of the src string
*/

#include <stdio.h>

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int dest_len = 0;

    while (dest[dest_len] != '\0') {
        dest_len++;
    }
    while (i < nb && src[i] != '\0') {
        dest[dest_len] = src[i];
        dest_len++;
        i += 1;
    }
    dest[dest_len] = '\0';
    return dest;
}
