#include "game.h"

static uint8_t current_level = 1;
static const uint8_t level_one_platforms[] = {
    2, 6, 10, 14, 18, 22,
    2, 6, 10, 14, 18, 22,
    0
};

void level_init(uint8_t level)
{
    current_level = level ? level : 1;
    /* TODO: cargar mapas de plataformas y escaleras por nivel. */
    (void)level_one_platforms;
}

uint8_t level_get_current(void)
{
    return current_level;
}
