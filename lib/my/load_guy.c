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
        if (rect->left >= 900) {
            rect->left = 0;
            rect->top += 300;
        }
        if (rect->top >= 900) {
            rect->top = 0;
            rect->left += 300;
        }
        rect->left += 300;
        sfSprite_setTextureRect(guy, *rect);
        sfClock_restart(timer);
    }
}

void resize_jump(loadwindowall_t *all, const int ground_pos[])
{
    for (int i = 0; ground_pos[i] != -1; i++) {
        if (all->guy.positionguy.y == ground_pos[i]) {
            sfSound_play(all->guy.jump);
            all->guy.velocity = -20.0f;
        }
    }
}

void jump(loadwindowall_t *all)
{
    const float gravity = 0.7f;
    const int ground_pos[] = {710, 468, 212, -1};

    if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        resize_jump(all, ground_pos);
    }

    all->guy.positionguy.y += all->guy.velocity;
    if (all->guy.positionguy.y >= 710) {
        all->guy.velocity = 0;
        all->guy.positionguy.y = 710;
    }
    all->guy.velocity += gravity;
    sfSprite_setPosition(all->guy.spriteguy, all->guy.positionguy);
}

guy_t load_guy(void)
{
    guy_t guy;
    guy.guy = sfTexture_createFromFile(BODY, NULL);
    guy.sizeguy = (sfVector2f) {1, 1};
    guy.positionguy = (sfVector2f) {50, 710};
    guy.spriteguy = sfSprite_create();
    guy.rect = (sfIntRect) {0, 0, 300, 300};
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
