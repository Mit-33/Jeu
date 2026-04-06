#include "Movable.h"
#include "Ground.h"
#include <array>
#include <iostream>

void Movable::move(int coords[2]) {
    pos[0] += coords[0];
    pos[1] += coords[1];
    pos[2] += coords[0];
    pos[3] += coords[1];
}

void Movable::move(array<int,2> coords) {
    pos[0] += coords[0];
    pos[1] += coords[1];
    pos[2] += coords[0];
    pos[3] += coords[1];
}

void Movable::moveto(int coords[2]) {
    pos[0] = coords[0];
    pos[1] = coords[1];
    pos[2] = coords[0]+width-1;
    pos[3] = coords[1]+height-1;
}

void Movable::moveto(array<int,2> coords) {
    pos[0] = coords[0];
    pos[1] = coords[1];
    pos[2] = coords[0]+width-1;
    pos[3] = coords[1]+height-1;
}

bool Movable::collide(Movable a) {
    if (pos[0] == a.pos[0] && pos[1] == a.pos[1]) {
        return true;
    }
    return false;
}

int* Movable::getPos() {
    return pos;
}