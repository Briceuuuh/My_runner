/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-brice.huet
** File description:
** put_cube
*/

#include "runner.h"

void put_cube(loadwindowall_t *all, int hauteur, int longueur)
{
    int x = longueur + all->cube.positioncube.x;
    sfSprite_setPosition(all->cube.spritecube, (sfVector2f) {x, hauteur});
    sfRenderWindow_drawSprite(all->window.window, all->cube.spritecube, NULL);
    touchcube(all);
}

void put_enemy(loadwindowall_t *all, int hauteur, int longueur)
{
    int x = longueur + all->spiked.positionspiked.x;
    sfSprite_setPosition(all->spiked.spritespiked
    , (sfVector2f) {x, (hauteur + 138)});
    clockenemy(all->spiked.timer, all->spiked.spritespiked
    , &all->spiked.rect);
    sfRenderWindow_drawSprite(all->window.window
    , all->spiked.spritespiked, NULL);
    touchenemy(all);
}