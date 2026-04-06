#include "Player.h"
#include "string"

void Player::update(string key,Ground &ground) {
    if (keys.count(key) > 0) {
        array<int,2> move = keys.at(key);
        if (confirm(ground,move)) {
            this->move(move);
        }
    }
}
