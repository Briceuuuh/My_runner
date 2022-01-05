/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-brice.huet
** File description:
** game
*/

#include "runner.h"
#include "struct.h"

loadwindowall_t *load_all(void)
{
    loadwindowall_t *loadwindowall = malloc(sizeof(loadwindowall_t));
    loadwindowall->window = load_window();
    loadwindowall->windowsec = load_windowsec();
    loadwindowall->windowthird = load_windowthird();
    loadwindowall->windowfourth = load_windowfourth();
    loadwindowall->windowfifth = load_windowfifth();
    loadwindowall->guy = load_guy();
    return (loadwindowall);
}

void leftback(loadwindowall_t *all)
{
    if (all->windowsec.backpossec.x <= -1920.0){
        all->windowsec.backpossec.x = 0;
        sfSprite_setPosition(all->windowsec.spritesec,
        all->windowsec.backpossec);
    }
    if (all->windowthird.backposthird.x <= -1920.0){
        all->windowthird.backposthird.x = 0;
        sfSprite_setPosition(all->windowthird.spritethird,
        all->windowthird.backposthird);
    }
    if (all->windowfourth.backposfourth.x <= -1920.0){
        all->windowfourth.backposfourth.x = 0;
        sfSprite_setPosition(all->windowfourth.spritefourth,
        all->windowfourth.backposfourth);
    }
    if (all->windowfifth.backposfifth.x <= -1920.0){
        all->windowfifth.backposfifth.x = 0;
        sfSprite_setPosition(all->windowfifth.spritefifth,
        all->windowfifth.backposfifth);
    }
}

void moveback(loadwindowall_t *all)
{
    all->windowsec.backpossec.x -= 2;
    sfSprite_setPosition(all->windowsec.spritesec,
    all->windowsec.backpossec);
    all->windowthird.backposthird.x -= 4;
    sfSprite_setPosition(all->windowthird.spritethird,
    all->windowthird.backposthird);
    all->windowfourth.backposfourth.x -= 13;
    sfSprite_setPosition(all->windowfourth.spritefourth,
    all->windowfourth.backposfourth);
    all->windowfifth.backposfifth.x -= 15;
    sfSprite_setPosition(all->windowfifth.spritefifth,
    all->windowfifth.backposfifth);
    leftback(all);
}

void display(loadwindowall_t *loadwindowall)
{
    sfRenderWindow_clear(loadwindowall->window.window, sfBlack);
    moveback(loadwindowall);
    clock(loadwindowall->guy.timer, loadwindowall->guy.spriteguy
    ,&loadwindowall->guy.rect);
    sfRenderWindow_drawSprite(loadwindowall->window.window
    ,loadwindowall->window.spriteback, NULL);
    sfRenderWindow_drawSprite(loadwindowall->window.window
    ,loadwindowall->windowsec.spritesec, NULL);
    sfRenderWindow_drawSprite(loadwindowall->window.window
    ,loadwindowall->windowthird.spritethird, NULL);
    sfRenderWindow_drawSprite(loadwindowall->window.window
    ,loadwindowall->windowfourth.spritefourth, NULL);
    sfRenderWindow_drawSprite(loadwindowall->window.window
    ,loadwindowall->guy.spriteguy, NULL);
    sfRenderWindow_drawSprite(loadwindowall->window.window
    ,loadwindowall->windowfifth.spritefifth, NULL);
    sfRenderWindow_display(loadwindowall->window.window);
}

void analyze_event(loadwindowall_t *loadwindowall)
{
    while (sfRenderWindow_pollEvent(loadwindowall->window.window,
    &loadwindowall->window.event)) {
        if (loadwindowall->window.event.type == sfEvtClosed) {
            sfRenderWindow_close(loadwindowall->window.window);
        }
    }
}
