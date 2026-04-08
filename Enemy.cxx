#include "Enemy.h"
#include "Ground.h"

void Enemy::update(Ground &ground) {
    int *pos = getPos();

    int move[2] = {dx,0};

    if (confirm(ground,move)) {
        this->move(move);
    } else {
        if (pos[0]+1 >= ground.getHeight()) {
            dx = -1;
        } else if (pos[0] <= 0) {
            dx = 1;
        }
        move[0] = dx;
        this->move(move);
    }
}