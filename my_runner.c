/*
** EPITECH PROJECT, 2021
** csfml
** File description:
** test
*/

#include "runner.h"
#include "struct.h"

void my_runner(char *str)
{
    char **map = readmap(str);
    loadwindowall_t *loadwindowall = load_all();
    sfRenderWindow_setFramerateLimit(loadwindowall->window.window, 60);
    while (sfRenderWindow_isOpen(loadwindowall->window.window)) {
        analyze_event(loadwindowall);
        jump(loadwindowall);
        display(loadwindowall, map);
    }
    sfRenderWindow_destroy(loadwindowall->window.window);
}

int main(int ac, char **av)
{
    if (ac == 2)
        my_runner(av[1]);
    else {
        my_putstr("Choose file");
        return 84;
    }
    return 0;
}
