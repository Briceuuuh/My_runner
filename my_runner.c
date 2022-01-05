/*
** EPITECH PROJECT, 2021
** csfml
** File description:
** test
*/

#include "runner.h"
#include "struct.h"

/* int my_strlen(char const *str)
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

void funcantman(char *str)
{
    int cpt = 0;
    char *c = my_strdup(c);

    while (str[cpt] != '\0') {
        c[cpt] = str[cpt];
        cpt = cpt + 1;
    }
    printf("%s\n", c);
}

void read_map(char const *filepath)
{
    int cpt = 0;
    char *c = malloc(sizeof(char) * 35);
    int fd = open(filepath, O_RDONLY);
    if (fd == -1)
        printf("file no exist");
    read(fd, c, 35);
    while (c[cpt] != '\0') {
        cpt = cpt + 1;
    }
    funcantman(c);
    close(fd);
} */

void my_runner()
{
    /* int cpt = 0;
    char *c = my_strdup(c);
    int fd = open(filepath, O_RDONLY);
    if (fd == -1)
        printf("file no exist");
    read(fd, c, 35);
    while (c[cpt] != '\0') {
        cpt = cpt + 1;
    }
    read_map(c); */
    loadwindowall_t *loadwindowall = load_all();
    sfRenderWindow_setFramerateLimit(loadwindowall->window.window, 60);
    while (sfRenderWindow_isOpen(loadwindowall->window.window)) {
        analyze_event(loadwindowall);
        jump(loadwindowall);
        display(loadwindowall);
    }
    sfRenderWindow_destroy(loadwindowall->window.window);
    //close(fd);
}

int main(void)
{
    my_runner();
    return 0;
}
