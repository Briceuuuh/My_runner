/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-brice.huet
** File description:
** load_window
*/

#include "runner.h"

window_t load_window(void)
{
    window_t window;
    window.mode = (sfVideoMode) {1920, 1080, 32};
    window.sizeback = (sfVector2f) {1, 1};
    window.window = sfRenderWindow_create(window.mode,
    "GUY PUMP le RUNNER", sfResize | sfClose, NULL);
    window.background = sfTexture_createFromFile(BACK, NULL);
    window.spriteback = sfSprite_create();
    window.backmusic = sfMusic_createFromFile(MUSIC);
    sfMusic_play(window.backmusic);
    sfMusic_setLoop(window.backmusic, sfTrue);
    sfSprite_setTexture(window.spriteback, window.background, sfTrue);
    sfSprite_setScale(window.spriteback, window.sizeback);
    return (window);
}

windowsec_t load_windowsec(void)
{
    windowsec_t windowsec;
    windowsec.backsec = sfTexture_createFromFile(BACKSEC, NULL);
    windowsec.sizesec = (sfVector2f) {1, 1};
    windowsec.spritesec = sfSprite_create();
    windowsec.backpossec = (sfVector2f) {0, 0};
    sfSprite_setPosition(windowsec.spritesec, (sfVector2f) {0, 0});
    sfSprite_setTexture(windowsec.spritesec, windowsec.backsec, sfTrue);
    sfSprite_setScale(windowsec.spritesec, windowsec.sizesec);
    return (windowsec);
}

windowthird_t load_windowthird(void)
{
    windowthird_t windowthird;
    windowthird.backthird = sfTexture_createFromFile(BACKTHIRD, NULL);
    windowthird.sizethird = (sfVector2f) {1, 1};
    windowthird.spritethird = sfSprite_create();
    windowthird.backposthird = (sfVector2f) {0, 0};
    sfSprite_setPosition(windowthird.spritethird, (sfVector2f) {0, 0});
    sfSprite_setTexture(windowthird.spritethird,
    windowthird.backthird, sfTrue);
    sfSprite_setScale(windowthird.spritethird, windowthird.sizethird);
    return (windowthird);
}

windowfourth_t load_windowfourth(void)
{
    windowfourth_t windowfourth;
    windowfourth.backfourth = sfTexture_createFromFile(BACKFOURTH, NULL);
    windowfourth.sizefourth = (sfVector2f) {1, 1};
    windowfourth.spritefourth = sfSprite_create();
    windowfourth.backposfourth = (sfVector2f) {0, 0};
    sfSprite_setPosition(windowfourth.spritefourth, (sfVector2f) {0, 0});
    sfSprite_setTexture(windowfourth.spritefourth,
    windowfourth.backfourth, sfTrue);
    sfSprite_setScale(windowfourth.spritefourth, windowfourth.sizefourth);
    return (windowfourth);
}

windowfifth_t load_windowfifth(void)
{
    windowfifth_t windowfifth;
    windowfifth.backfifth = sfTexture_createFromFile(BACKFIFTH, NULL);
    windowfifth.sizefifth = (sfVector2f) {1, 1};
    windowfifth.spritefifth = sfSprite_create();
    windowfifth.backposfifth = (sfVector2f) {0, 0};
    sfSprite_setPosition(windowfifth.spritefifth, (sfVector2f) {500, 500});
    sfSprite_setTexture(windowfifth.spritefifth,
    windowfifth.backfifth, sfTrue);
    sfSprite_setScale(windowfifth.spritefifth, windowfifth.sizefifth);
    return (windowfifth);
}
