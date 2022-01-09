/*
** EPITECH PROJECT, 2021
** myh
** File description:
** write all fonctios
*/

#ifndef MY_H_
    #define MY_H_
    #include "struct.h"

    typedef struct load_all {
        window_t window;
        windowsec_t windowsec;
        windowthird_t windowthird;
        windowfourth_t windowfourth;
        windowfifth_t windowfifth;
        guy_t guy;
        cube_t cube;
    }loadwindowall_t;

    void clock(sfClock *timer, sfSprite *guy, sfIntRect *rect);

#endif
