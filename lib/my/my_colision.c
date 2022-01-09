/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-brice.huet
** File description:
** colision
*/

#include "my.h"

void touchcube(loadwindowall_t *all)
{
    sfFloatRect boundguy = sfSprite_getGlobalBounds(all->guy.spriteguy);
    sfFloatRect boundcube = sfSprite_getGlobalBounds(all->cube.spritecube);
    boundguy.width -= 100;
    boundguy.left += 50;
    if (sfFloatRect_intersects(&boundguy, &boundcube, NULL) && boundguy.top +
    boundguy.height - all->guy.velocity <= boundcube.top) {
        all->guy.positionguy.y = boundcube.top - boundguy.height;
        all->guy.velocity = 0;
    }
    else if (sfFloatRect_intersects(&boundguy, &boundcube, NULL) &&
    boundguy.left + boundguy.width >= boundcube.left &&
    all->guy.positionguy.y > 469 && all->cube.positioncube.x < 50) {
        sfSprite_setPosition(all->lose.spritelose, (sfVector2f) {0, 0});
        sfMusic_stop(all->window.backmusic);
        sfSound_play(all->lose.die);
        all->guy.velocity = -2000;
    }
}

void touchenemy(loadwindowall_t *all)
{
    sfFloatRect boundguy = sfSprite_getGlobalBounds(all->guy.spriteguy);
    sfFloatRect boundenemy = sfSprite_getGlobalBounds(all->spiked.spritespiked);
    boundguy.width -= 150;
    boundguy.left += 75;
    if (sfFloatRect_intersects(&boundguy, &boundenemy, NULL) == sfTrue) {
        sfSprite_setPosition(all->lose.spritelose, (sfVector2f) {0, 0});
        sfMusic_stop(all->window.backmusic);
        sfSound_play(all->lose.die);
        all->guy.velocity = -2000;
    }
}