#include "game.h"

/*
 * Lectura provisional de teclado.
 * TODO: implementar lectura directa del teclado Sinclair o Kempston.
 * Las funciones devuelven 0 hasta que se conecte el controlador real.
 */
static uint8_t key_left;
static uint8_t key_right;
static uint8_t key_up;
static uint8_t key_down;
static uint8_t key_fire;

void input_update(void)
{
    key_left = 0;
    key_right = 0;
    key_up = 0;
    key_down = 0;
    key_fire = 0;
}

uint8_t input_left(void)  { return key_left; }
uint8_t input_right(void) { return key_right; }
uint8_t input_up(void)    { return key_up; }
uint8_t input_down(void)  { return key_down; }
uint8_t input_fire(void)  { return key_fire; }
