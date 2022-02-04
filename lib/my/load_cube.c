/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-brice.huet
** File description:
** load_cube
*/

#include "struct.h"
#include "my.h"
#include "runner.h"

lose_t load_lose(void)
{
    lose_t lose;
    lose.backlose = sfTexture_createFromFile(LOSE, NULL);
    lose.sizelose = (sfVector2f) {1, 1};
    lose.spritelose = sfSprite_create();
    lose.diebuffer = sfSoundBuffer_createFromFile(OUH);
    lose.die = sfSound_create();
    sfSound_setBuffer(lose.die, lose.diebuffer);
    sfSprite_setPosition(lose.spritelose, (sfVector2f) {2000, 2000});
    sfSprite_setTexture(lose.spritelose, lose.backlose, sfTrue);
    sfSprite_setScale(lose.spritelose, lose.sizelose);
    return (lose);
}

cube_t load_cube(void)
{
    cube_t cube;
    cube.cube = sfTexture_createFromFile(CUBE, NULL);
    cube.sizecube = (sfVector2f) {1, 1};
    cube.positioncube = (sfVector2f) {50, 775};
    cube.spritecube = sfSprite_create();
    sfSprite_setPosition(cube.spritecube, cube.positioncube);
    sfSprite_setScale(cube.spritecube, cube.sizecube);
    sfSprite_setTexture(cube.spritecube, cube.cube, sfTrue);
    return (cube);
}

void clockenemy(sfClock *timer, sfSprite *enemy, sfIntRect *rect)
{
    sfTime time = sfClock_getElapsedTime(timer);
    if (time.microseconds > 75000.0) {
        if (rect->left >= 1280) {
            rect->left = 0;
        }
        rect->left += 256;
        sfSprite_setTextureRect(enemy, *rect);
        sfClock_restart(timer);
    }
}

spiked_t load_spiked(void)
{
    spiked_t spiked;
    spiked.spiked = sfTexture_createFromFile(SPIKED, NULL);
    spiked.sizespiked = (sfVector2f) {1, 1};
    spiked.positionspiked = (sfVector2f) {50, 775};
    spiked.rect = (sfIntRect) {0, 0, 256, 128};
    spiked.spritespiked = sfSprite_create();
    spiked.timer = sfClock_create();
    sfSprite_setPosition(spiked.spritespiked, spiked.positionspiked);
    sfSprite_setScale(spiked.spritespiked, spiked.sizespiked);
    sfSprite_setTexture(spiked.spritespiked, spiked.spiked, sfTrue);
    return (spiked);
}
