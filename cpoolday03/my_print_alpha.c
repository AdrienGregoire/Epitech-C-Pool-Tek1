#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_alpha(void)
{
    char letter = 'a';

    for (; letter <= 'z'; letter++) {
        my_putchar(letter);
    }
    return 0;
}
