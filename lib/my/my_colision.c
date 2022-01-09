/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-brice.huet
** File description:
** colision
*/

#include "my.h"
#include "struct.h"
#include "runner.h"

void touch(loadwindowall_t *all)
{
    sfFloatRect boundguy = sfSprite_getGlobalBounds(all->guy.spriteguy);
    sfFloatRect boundcube = sfSprite_getGlobalBounds(all->cube.spritecube);
    boundguy.width -= 20;
    boundguy.left += 10;
    if (sfFloatRect_intersects(&boundguy, &boundcube, NULL) && boundguy.top +
    boundguy.height - all->guy.velocity <= boundcube.top) {
        all->guy.positionguy.y = boundcube.top - boundguy.height;
        all->guy.velocity = 0;
    }
}