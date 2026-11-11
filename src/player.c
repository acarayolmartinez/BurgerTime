#include "game.h"

static Player player;

void player_init(void)
{
    player.x = PLAYER_START_X;
    player.y = PLAYER_START_Y;
    player.alive = 1;
    player.direction = 1;
}

void player_update(void)
{
    if (!player.alive) return;

    if (input_left() && player.x > 0) {
        --player.x;
        player.direction = 0;
    } else if (input_right() && player.x < SCREEN_WIDTH - 1) {
        ++player.x;
        player.direction = 1;
    }

    if (input_up() && player.y > 0) --player.y;
    else if (input_down() && player.y < SCREEN_HEIGHT - 1) ++player.y;
}

void player_draw(void)
{
    /* Representación temporal hasta incorporar los sprites. */
    graphics_draw_text(player.x, player.y, "P");
}

Player *player_get(void)
{
    return &player;
}
