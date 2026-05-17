/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** concatenate two strings
*/

#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest, char const *src)
{
    int i = 0;

    for (; dest[i] != '\0'; i++) {
    }
    for (int n = 0; src[n] != '\0'; n++) {
        dest[i + n] = src[n];
    }
    return dest;
}
