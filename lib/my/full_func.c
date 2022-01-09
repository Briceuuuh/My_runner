/*
** EPITECH PROJECT, 2022
** B-MUL-100-RUN-1-1-myrunner-brice.huet
** File description:
** full_func
*/

#include "runner.h"
#include "struct.h"

int my_strlen(char const *str)
{
    int cpt = 0;

    while (str[cpt] != '\0')
        cpt = cpt + 1;
    return cpt;
}

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    int cpt = 0;
    char *str = malloc(sizeof(char) * len + 1);

    while (src[cpt] != '\0') {
        str[cpt] = src[cpt];
        cpt = cpt + 1;
    }
    str[cpt] = '\0';
    return str;
}

void levelmap(char **level, loadwindowall_t *all)
{
    int line = 0;
    int ch = 0;
    char str[my_strlen((level[line]))];
    int hauteur = 0;
    int longueur = 0;

    all->cube.positioncube.x -= 14;
    while (line != 5) {
        while (ch != my_strlen(level[line])) {
            str[ch] = level[line][ch];
            if (str[ch] == 'C') {
                int x = longueur + all->cube.positioncube.x;
                sfSprite_setPosition(all->cube.spritecube, (sfVector2f) {x, hauteur});
                sfRenderWindow_drawSprite(all->window.window, all->cube.spritecube, NULL);
                touch(all);
            }
            ch = ch + 1;
            longueur = longueur + 256;
        }
        longueur = 0;
        hauteur = hauteur + 256;
        ch = 0;
        line = line + 1;
    }
}

char **readmap(char const *filepath)
{
    char **level = malloc(sizeof(char *) * 5);
    size_t line;
    ssize_t size = 0;
    int endmap = 0;
    char *c = NULL;

    FILE *fd = fopen(filepath, "r");
    if (fd == NULL)
        my_putstr("file no exist");
    while ((size = getline(&c, &line, fd)) != -1) {
        if (c[size] == '\n')
            c[size] = '\0';
        level[endmap] = my_strdup(c);
        endmap = endmap + 1;
    }
    fclose(fd);
    return (level);
}