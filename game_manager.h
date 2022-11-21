#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H


typedef struct game_mngr {
    uint64_t a, b;
    uint8_t ncols;
} gm_t;


gm_t init_game();


#endif