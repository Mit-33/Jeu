#include <time.h>
#include "Object.h"
#include "Ground.h"

void Object::update(Ground &ground) {}

void Object::respawn(Ground &ground) {
    int dpos[2];
    srand((int)time(NULL));
    dpos[0] = rand()%ground.WIDTH;

    srand((int)(time(NULL)*2));
    dpos[1] = rand()%ground.HEIGHT;
    moveto(dpos);
}