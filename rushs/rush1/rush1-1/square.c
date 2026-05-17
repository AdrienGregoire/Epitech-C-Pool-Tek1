/*
** EPITECH PROJECT, 2024
** square
** File description:
** display square
*/

void error_msg(void)
{
    write(2, "Invalid size\n", 13);
}

void my_putline(int x, char corner, char line)
{
    my_putchar(corner);
    for (int i = 0; i < x - 2; ++i) {
        my_putchar(line);
    }
    if (x != 1) {
        my_putchar(corner);
    }
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        error_msg();
        return;
    }
    my_putline(x, 'o', '-');
    for (int i = 0; i < y - 2; ++i) {
        my_putline(x, '|', ' ');
    }
    if (y != 1) {
        my_putline(x, 'o', '-');
    }
}
