#include "game.h"
#include <stdio.h>

/* Backend temporal de texto. Se sustituirá por atributos y sprites Nirvana+. */
void graphics_init(void)
{
    graphics_clear();
}

void graphics_clear(void)
{
    /* TODO: limpiar el área de juego sin borrar la zona de estado. */
    printf("\n\n");
}

void graphics_draw_tile(uint8_t x, uint8_t y, uint8_t tile)
{
    (void)x;
    (void)y;
    (void)tile;
}

void graphics_draw_text(uint8_t x, uint8_t y, const char *text)
{
    (void)x;
    (void)y;
    printf("%s", text);
}
