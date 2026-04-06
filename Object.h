#include "MoveDraw.h"
#include "Ground.h"

class Object : public MoveDraw {
    public:

    Object() : MoveDraw() {
        img = 'o';
    }

    Object(int x,int y) : MoveDraw(x,y) {
        img = 'o';
    }

    void update(Ground &ground);

    void respawn(Ground &ground);
};