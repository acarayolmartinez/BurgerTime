#ifndef BURGERTIME_GAME_H
#define BURGERTIME_GAME_H

#include <stdint.h>

#define SCREEN_WIDTH  32
#define SCREEN_HEIGHT 24
#define MAX_ENEMIES   4
#define MAX_INGREDIENTS 6

#define TILE_EMPTY    0
#define TILE_PLATFORM 1
#define TILE_LADDER   2

#define PLAYER_START_X 2
#define PLAYER_START_Y 20

typedef struct {
    uint8_t x;
    uint8_t y;
    uint8_t alive;
    uint8_t direction;
} Player;

typedef struct {
    uint8_t x;
    uint8_t y;
    uint8_t alive;
    uint8_t direction;
} Enemy;

typedef struct {
    uint8_t x;
    uint8_t y;
    uint8_t pieces_left;
    uint8_t active;
} Ingredient;

void game_init(void);
void game_update(void);
void game_draw(void);
void game_run(void);

void input_update(void);
uint8_t input_left(void);
uint8_t input_right(void);
uint8_t input_up(void);
uint8_t input_down(void);
uint8_t input_fire(void);

void player_init(void);
void player_update(void);
void player_draw(void);
Player *player_get(void);

void enemies_init(void);
void enemies_update(void);
void enemies_draw(void);

void burgers_init(void);
void burgers_update(void);
void burgers_draw(void);

void level_init(uint8_t level);
uint8_t level_get_current(void);

void graphics_init(void);
void graphics_clear(void);
void graphics_draw_tile(uint8_t x, uint8_t y, uint8_t tile);
void graphics_draw_text(uint8_t x, uint8_t y, const char *text);

void sound_init(void);
void sound_step(void);
void sound_bump(void);

#endif
