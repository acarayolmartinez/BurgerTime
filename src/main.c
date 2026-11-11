#include "game.h"

static void wait_frame(void)
{
    /* TODO: sustituir por una espera sincronizada con el refresco de pantalla. */
    volatile uint16_t delay;
    for (delay = 0; delay < 1200; ++delay) {
        /* Espera provisional. */
    }
}

void game_init(void)
{
    graphics_init();
    sound_init();
    level_init(1);
    player_init();
    enemies_init();
    burgers_init();
}

void game_update(void)
{
    input_update();
    player_update();
    enemies_update();
    burgers_update();
}

void game_draw(void)
{
    graphics_clear();
    /* El orden evita que los elementos del escenario tapen al jugador. */
    burgers_draw();
    enemies_draw();
    player_draw();
}

void game_run(void)
{
    game_init();
    for (;;) {
        game_update();
        game_draw();
        wait_frame();
    }
}

int main(void)
{
    game_run();
    return 0;
}
