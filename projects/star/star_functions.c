/*
** EPITECH PROJECT, 2024
** star_functions
** File description:
** functions for star
*/

void my_putchar(char c);

int revbody(unsigned int size)
{
    unsigned int taille = 2 * ((2 * size) + 1) + 2 * (size - 2) + 1;

    if (size == 1) {
        taille = taille - 2 * (size - 2);
    }
    for (unsigned int n = size - 1; n > 0; n--) {
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

int reverse_branch(unsigned int size)
{
    for (unsigned int line = 1; line <= size; line++) {
        if (size == 1) {
            my_putchar(' ');
        }
        for (unsigned int n = 0; n < size / 1 + size - 1 + line; n++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (unsigned int n = 0; line < size && n < (size - line) * 2 - 1; n++) {
        my_putchar(' ');
        }
        if (line < size) {
            my_putchar('*');
        }
        my_putchar('\n');
    }
}
