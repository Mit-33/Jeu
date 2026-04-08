#include "MoveDraw.h"
#include <string>
#include <array>
using namespace std;

bool MoveDraw::confirm(Ground &ground,int coords[]) {
    int *pos = getPos();

    int dx = pos[0] + coords[0];
    int dy = pos[1] + coords[1];

    if (dx >= 0 && dx < ground.getWidth() && dy >= 0 && dy < ground.getHeight()) {
        return true;
    }
    return false;
}

bool MoveDraw::confirm(Ground &ground,array<int,2> coords) {
    int *pos = getPos();
    
    int dx = pos[0] + coords[0];
    int dy = pos[1] + coords[1];
    
    if (dx >= 0 && dx < ground.getWidth() && dy >= 0 && dy < ground.getHeight()) {
        return true;
    }
    return false;
}

bool MoveDraw::confirmCollide(Ground &ground,int coords[],char img) {
    if ( ground.getAt(getPos()[0]+coords[0],getPos()[1]+coords[1])[1] == img) {
        return true;
    }
    return false;
}

bool MoveDraw::confirmCollide(Ground &ground,array<int,2> coords,char img) {
    if ( ground.getAt(getPos()[0]+coords[0],getPos()[1]+coords[1])[1] == img) {
        return true;
    }
    return false;
}

void MoveDraw::draw(Ground &ground) {
    Drawable::draw(ground,getPos());
}