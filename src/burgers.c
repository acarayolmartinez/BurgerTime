#include "game.h"

static Ingredient ingredients[MAX_INGREDIENTS];

void burgers_init(void)
{
    uint8_t i;
    for (i = 0; i < MAX_INGREDIENTS; ++i) {
        ingredients[i].x = (uint8_t)(4 + (i % 3) * 9);
        ingredients[i].y = (uint8_t)(5 + (i / 3) * 7);
        ingredients[i].pieces_left = 4;
        ingredients[i].active = 1;
    }
}

void burgers_update(void)
{
    /* TODO: detectar el paso del jugador por cada sección del ingrediente,
       hacerla caer y comprobar cuándo se completa una hamburguesa. */
}

void burgers_draw(void)
{
    uint8_t i;
    for (i = 0; i < MAX_INGREDIENTS; ++i) {
        if (ingredients[i].active) {
            graphics_draw_text(ingredients[i].x, ingredients[i].y, "====");
        }
    }
}
