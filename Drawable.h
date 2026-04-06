#include "Ground.h"

#ifndef DRAWABLE_DEF
#define DRAWABLE_DEF

class Drawable {
    protected:
    char img;
    public:

    void draw(Ground &ground,int pos[]);
};
#endif