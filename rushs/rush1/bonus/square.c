/*
** EPITECH PROJECT, 2024
** square
** File description:
** display square
*/

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

void rush_generic(int *xy, char *corner, char *last_corner, char *line)
{
    my_putline(xy[0], xy[1], corner, *line);
    for (int i = 0; i < xy[1] - 2; ++i)
        my_putline(xy[0], xy[1], line, ' ');
    if (xy[1] != 1)
        my_putline(xy[0], xy[1], last_corner, *line);
}
