#include <stdlib.h>
#include <stdint.h>

#include <game_manager.h>

/**
Initiates a Connect 4 game.

Returns :
- NULL : if an error occurs
- gm_t* : the newly created game
*/
gm_t* init_game() {
    gm_t* gm = (gm_t*) malloc(sizeof(gm_t));
    if (gm == NULL) return NULL;    // TODO : throw exception instead
    gm->a = (uint64_t) (1<<63);
    gm->b = (uint64_t) 0;
    gm->c = (uint64_t) 0;
    return gm;
}


void destr_game(gm_t* gm) {
    free(gm);
}