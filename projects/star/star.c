/*
** EPITECH PROJECT, 2024
** star
** File description:
** display a star, based on its given size
*/

void my_putchar(char c);
int revbody(unsigned int size);
int reverser_branch(unsigned int size);
#include <stdio.h>

int branch(unsigned int size)
{
    for (unsigned int line = 1; line <= size; line++) {
        if (size == 1) {
            my_putchar(' ');
        }
        for (unsigned int n = 0; n < size * 2 + size - line; n++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (unsigned int space = 0; space < (line - 1) * 2 - 1; space++) {
        my_putchar(' ');
        }
        if (line > 1 && line < size + 1) {
            my_putchar('*');
        }
        my_putchar('\n');
    }
    return 0;
}

int center_line(unsigned int size)
{
    for (unsigned int n = 0; n < 2 * size + 1; n++) {
        my_putchar('*');
    }
    if (size != 1) {
        for (unsigned int n = 0; n < 2 * (size - 2) + 1; n++) {
            my_putchar(' ');
        }
    } else {
        for (unsigned int n = 0; n < size; n++) {
            my_putchar(' ');
        }
    }
    for (unsigned int n = 0; n < 2 * size + 1; n++) {
        my_putchar('*');
    }
    my_putchar('\n');
    return 0;
}

int body(unsigned int size)
{
    unsigned int taille = 2 * ((2 * size) + 1) + 2 * (size - 2) + 1;

    if (size == 1) {
        taille = taille - 2 * (size - 2);
    }
    for (unsigned int n = 1; n < size + 1; n++) {
        for (unsigned int len = 0; len < n; len++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (unsigned int space = 0; space < taille - 2 - 2 * n; space++) {
            my_putchar(' ');
        }
        my_putchar('*');
        my_putchar('\n');
    }
    return 0;
}

void star(unsigned int size)
{
    if (size == 0) {
        return;
    }
    branch(size);
    center_line(size);
    body(size);
    revbody(size);
    center_line(size);
    reverse_branch(size);
}
