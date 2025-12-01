/*
** EPITECH PROJECT, 2024
** my_evil_str
** File description:
** swap each of the strings characters two by two
*/

#include <stdio.h>

void my_putchar(char c);
int my_strlen(char const *str);

char *my_evil_str(char *str)
{
    int i;
    char d = '0';
    int len = my_strlen(str);

    for (i = 0; len / 2 > i; i++){
        d = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = d;
    }
    return str;
}
