#include "MoveDraw.h"
#include "Ground.h"

class Enemy : public MoveDraw {
    private:
    int dx;
    public:
    Enemy() : MoveDraw() {
        img = 'x';
        dx = 1;
    }

    void update(Ground &ground);

    Enemy(int x,int y) : MoveDraw(x,y) {
        img = 'x';
        dx = 1;
    }
}; 