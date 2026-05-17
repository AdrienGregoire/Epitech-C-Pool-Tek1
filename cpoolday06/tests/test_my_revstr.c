#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, copy_string_in_empty_array)
{
    char str[] = "bonjour";

    cr_assert_str_eq(my_revstr(str), "ruojnob");
}
