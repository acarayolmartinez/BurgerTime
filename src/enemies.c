#include "game.h"

static Enemy enemies[MAX_ENEMIES];

void enemies_init(void)
{
    uint8_t i;
    for (i = 0; i < MAX_ENEMIES; ++i) {
        enemies[i].x = (uint8_t)(26 - i * 3);
        enemies[i].y = 20;
        enemies[i].alive = (i < 2) ? 1 : 0;
        enemies[i].direction = 0;
    }
}

void enemies_update(void)
{
    uint8_t i;
    for (i = 0; i < MAX_ENEMIES; ++i) {
        if (!enemies[i].alive) continue;
        if (enemies[i].direction) {
            if (enemies[i].x < SCREEN_WIDTH - 1) ++enemies[i].x;
            else enemies[i].direction = 0;
        } else {
            if (enemies[i].x > 0) --enemies[i].x;
            else enemies[i].direction = 1;
        }
    }
}

void enemies_draw(void)
{
    uint8_t i;
    for (i = 0; i < MAX_ENEMIES; ++i) {
        if (enemies[i].alive) graphics_draw_text(enemies[i].x, enemies[i].y, "E");
    }
}
