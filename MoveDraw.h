#include "Ground.h"
#include "Movable.h"
#include "Drawable.h"

#ifndef MOVEDRAW_DEF
#define MOVEDRAW_DEF

class MoveDraw : public Movable, public Drawable {
    protected:
    
    bool confirm(Ground &ground,int coords[]);
    bool confirm(Ground &ground,array<int,2> coords);
    
    MoveDraw() : Movable(), Drawable() {}
    
    MoveDraw(int x,int y) : Movable(x,y), Drawable() {}

    MoveDraw(int x1,int y1,int x2,int y2) : Movable(x1,y1,x2,y2), Drawable() {}

    public:
    void draw(Ground &ground);
};
#endif