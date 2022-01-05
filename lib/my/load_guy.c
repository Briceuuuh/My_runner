/*
** EPITECH PROJECT, 2021
** my-runner
** File description:
** load_guy
*/

#include "runner.h"

void clock(sfClock *timer, sfSprite *guy, sfIntRect *rect)
{
    sfTime time = sfClock_getElapsedTime(timer);
    if (time.microseconds > 75000.0) {
        if (rect->left >= 6144) {
            rect->left = 0;
            rect->top += 2048;
        }
        if (rect->top >= 4096) {
            rect->top = 0;
            rect->left += 2048;
        }
        else
            rect->left += 2048;
        sfSprite_setTextureRect(guy, *rect);
        sfClock_restart(timer);
    }
}

void jump(loadwindowall_t *all)
{
    const float gravity = 0.8f;
    if ((sfKeyboard_isKeyPressed(sfKeySpace)) &&
    all->guy.positionguy.y >= 710) {
        sfSound_play(all->guy.jump);
        all->guy.velocity = -20.0f;
    }
    all->guy.positionguy.y += all->guy.velocity;
    all->guy.velocity += gravity;
    if (all->guy.positionguy.y >= 710) {
        all->guy.velocity = 0;
        all->guy.positionguy.y = 710;
    }
    sfSprite_setPosition(all->guy.spriteguy, all->guy.positionguy);
}

guy_t load_guy(void)
{
    guy_t guy;
    guy.guy = sfTexture_createFromFile(BODY, NULL);
    guy.sizeguy = (sfVector2f) {0.14, 0.14};
    guy.positionguy = (sfVector2f) {50, 710};
    guy.spriteguy = sfSprite_create();
    guy.rect = (sfIntRect) {0, 0, 2048, 2048};
    guy.timer = sfClock_create();
    guy.jumpbuffer = sfSoundBuffer_createFromFile(JUMP);
    guy.jump = sfSound_create();
    guy.velocity = 0;
    sfSound_setBuffer(guy.jump, guy.jumpbuffer);
    sfSprite_setPosition(guy.spriteguy, guy.positionguy);
    sfSprite_setScale(guy.spriteguy, guy.sizeguy);
    sfSprite_setTexture(guy.spriteguy, guy.guy, sfTrue);
    clock(guy.timer, guy.spriteguy, &guy.rect);
    return (guy);
}
