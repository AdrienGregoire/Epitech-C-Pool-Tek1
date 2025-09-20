#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_revalpha(void)
{
    char letter = 'z';

    for (; letter >= 'a'; letter--) {
        my_putchar(letter);
    }
    return 0;
}
