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

void my_putline(int x, int y, char *corner, char line)
{
    if (y != 1 && x != 1) {
        my_putchar(corner[0]);
    } else {
        my_putchar('B');
    }
    for (int i = 0; i < x - 2; ++i)
        my_putchar(line);
    if (x != 1)
        if (y != 1 && x != 1) {
            my_putchar(corner[1]);
        } else {
            my_putchar('B');
        }
    my_putchar('\n');
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        error_msg();
        return;
    }
    my_putline(x, y, "AC", 'B');
    for (int i = 0; i < y - 2; ++i)
        my_putline(x, y, "BB", ' ');
    if (y != 1)
        my_putline(x, y, "CA", 'B');
}
