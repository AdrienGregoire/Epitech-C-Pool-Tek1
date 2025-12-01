/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** swap the content of two integers
*/

#include <stdio.h>
#include <unistd.h>
int my_putchar(char c);
int my_swap(int *a, int *b)
{
    int d = 0;
    int *ptr3;

    ptr3 = &d;
    *ptr3 = *a;
    *a = *b;
    *b = *ptr3;
    return 0;
}
