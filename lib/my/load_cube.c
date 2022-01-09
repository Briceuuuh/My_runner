/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-brice.huet
** File description:
** load_cube
*/

#include "struct.h"

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