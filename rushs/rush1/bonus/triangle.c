/*
** EPITECH PROJECT, 2024
** triangle.c
** File description:
** display triangle
*/

static void do_line(int n, char c)
{
    for (int i = 0; i < n; ++i)
        my_putchar(c);
}

void triangle(int size, char c)
{
    do_line(size + 1, ' ');
    my_putchar(c);
    my_putchar('\n');
    for (int i = 0; i < size; ++i) {
        do_line(size - i, ' ');
        my_putchar(c);
        do_line((i * 2) + 1, ' ');
        my_putchar(c);
        my_putchar('\n');
    }
    do_line((size * 2) + 3, c);
    my_putchar('\n');
}
