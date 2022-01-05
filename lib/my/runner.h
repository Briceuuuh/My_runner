/*
** EPITECH PROJECT, 2021
** myh
** File description:
** write all fonctios
*/

#ifndef RUNNER_H_
    #define RUNNER_H_
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include "struct.h"
    #include "my.h"

    int my_putstr(char const *str);

    void display(loadwindowall_t *loadwindowall);

    void analyze_event(loadwindowall_t *loadwindowall);

    loadwindowall_t *load_all(void);

    guy_t load_guy(void);

    void clock(sfClock *timer, sfSprite *guy, sfIntRect *rect);

    void jump(loadwindowall_t *loadwindowall);

#endif
