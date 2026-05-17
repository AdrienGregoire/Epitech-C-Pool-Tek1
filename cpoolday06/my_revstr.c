/*
** EPITECH PROJECT, 2024
** my_revstr
** File description:
** that reverse a string
*/

#include <stdio.h>

char *my_revstr(char *str)
{
    int i = 0;
    int len = 0;
    char temp;

    while (str[len] != '\0')
        len++;
    for (; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    return str;
}
