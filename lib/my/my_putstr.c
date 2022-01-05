/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** putstr
*/

#include "struct.h"
#include "my.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int var = 0;
    while (str[var] != '\0') {
        my_putchar(str[var]);
        var = var + 1;
    }
    return (0);
}
