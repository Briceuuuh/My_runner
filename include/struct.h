/*
** EPITECH PROJECT, 2021
** B-MUL-100-RUN-1-1-myrunner-brice.huet
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #define BACK "pics/layers/Sky.png"
    #define BACKSEC "pics/layers/backsec.png"
    #define BACKTHIRD "pics/layers/backthird.png"
    #define BACKFOURTH "pics/layers/backfourth.png"
    #define BACKFIFTH "pics/layers/backfifth.png"
    #define BODY "pics/lilpump copie.png"
    #define MUSIC "pics/musicback.ogg"
    #define JUMP "pics/jump.wav"

typedef struct window {
    sfRenderWindow *window;
    sfVideoMode mode;
    sfEvent event;
    sfTexture *background;
    sfVector2f sizeback;
    sfSprite *spriteback;
    sfMusic *backmusic;
}window_t;

window_t load_window(void);

typedef struct windowsecond {
    sfRenderWindow *windowsec;
    sfTexture *backsec;
    sfVector2f sizesec;
    sfSprite *spritesec;
    sfVector2f backpossec;
}windowsec_t;

windowsec_t load_windowsec(void);

typedef struct windowthird {
    sfRenderWindow *windowthird;
    sfTexture *backthird;
    sfVector2f sizethird;
    sfSprite *spritethird;
    sfVector2f backposthird;
}windowthird_t;

windowthird_t load_windowthird(void);

typedef struct windowfourth {
    sfRenderWindow *windowfourth;
    sfTexture *backfourth;
    sfVector2f sizefourth;
    sfSprite *spritefourth;
    sfVector2f backposfourth;
}windowfourth_t;

windowfourth_t load_windowfourth(void);

typedef struct windowfifth {
    sfRenderWindow *windowfifth;
    sfTexture *backfifth;
    sfVector2f sizefifth;
    sfSprite *spritefifth;
    sfVector2f backposfifth;
}windowfifth_t;

windowfifth_t load_windowfifth(void);

typedef struct guy {
    sfTexture *guy;
    sfVector2f sizeguy;
    sfVector2f positionguy;
    sfSprite *spriteguy;
    sfIntRect rect;
    sfClock *timer;
    float velocity;
    sfSound *jump;
    sfSoundBuffer *jumpbuffer;
}guy_t;

#endif /* !STRUCT_H_ */
