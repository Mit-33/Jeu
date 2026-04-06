#include "MoveDraw.h"


bool MoveDraw::confirm(Ground &ground,int coords[]) {
    int *pos = getPos();

    int dx = pos[0] + coords[0];
    int dy = pos[1] + coords[1];

    if (dx >= 0 && dx < ground.HEIGHT && dy >= 0 && dy < ground.WIDTH) {
        return true;
    }
    return false;
}

bool MoveDraw::confirm(Ground &ground,array<int,2> coords) {
    int *pos = getPos();
    
    int dx = pos[0] + coords[0];
    int dy = pos[1] + coords[1];
    
    if (dx >= 0 && dx < ground.HEIGHT && dy >= 0 && dy < ground.WIDTH) {
        return true;
    }
    return false;
}

void MoveDraw::draw(Ground &ground) {
    Drawable::draw(ground,getPos());
}