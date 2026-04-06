#include "Drawable.h"
#include "Ground.h"

void Drawable::draw(Ground &ground,int pos[]) {
    ground.draw(img,pos);
}