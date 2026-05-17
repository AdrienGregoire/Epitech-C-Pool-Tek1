/*
** EPITECH PROJECT, 2024
** my_print_params
** File description:
** display its arguments (received on the command line)
*/

#include <stdio.h>
#include <unistd.h>

int mmy_print_params(int argc, char *argv[])
{
    int i = 0;

    for (; i < argc; i++) {
        my_putstr(argv[i]);
        my_putchar("$");
        my_putchar("\n");
    }
    return 0;
}

int my_putstr(char const *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str += 1;
    }
    return 0;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}
