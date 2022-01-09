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

    void display(loadwindowall_t *loadwindowall, char **map);

    void analyze_event(loadwindowall_t *loadwindowall);

    loadwindowall_t *load_all(void);

    guy_t load_guy(void);

    cube_t load_cube(void);

    spiked_t load_spiked(void);

    lose_t load_lose(void);

    void clock(sfClock *timer, sfSprite *guy, sfIntRect *rect);

    void clockenemy(sfClock *timer, sfSprite *enemy, sfIntRect *rect);

    void jump(loadwindowall_t *loadwindowall);

    int my_strlen(char const *str);

    char *my_strdup(char const *src);

    void levelmap(char **level, loadwindowall_t *all);

    char **readmap(char const *filepath);

    void touchcube(loadwindowall_t *all);

    void touchenemy(loadwindowall_t *all);

    void put_cube(loadwindowall_t *all, int hauteur, int longueur);

    void put_enemy(loadwindowall_t *all, int hauteur, int longueur);

#endif
