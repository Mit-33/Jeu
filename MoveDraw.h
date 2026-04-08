#include "Ground.h"
#include "Movable.h"
#include "Drawable.h"
#include <string>
#include <array>
using namespace std;

#ifndef MOVEDRAW_DEF
#define MOVEDRAW_DEF

class MoveDraw : public Movable, public Drawable {
    protected:
    
    bool confirm(Ground &ground,int coords[]);
    bool confirm(Ground &ground,array<int,2> coords);

    bool confirmCollide(Ground &ground,int coords[],char img);
    bool confirmCollide(Ground &ground,array<int,2> coords,char img);
    
    MoveDraw() : Movable(), Drawable() {}
    
    MoveDraw(int x,int y) : Movable(x,y), Drawable() {}

    MoveDraw(int x1,int y1,int x2,int y2) : Movable(x1,y1,x2,y2), Drawable() {}

    public:
    void draw(Ground &ground);
};
#endif