#include <array>
#include <exception>
using namespace std;

#ifndef MOVABLE_DEF
#define MOVABLE_DEF

class Movable {
    private:
    int pos[4];
    
    protected:
    int width;
    int height;

    void move(int coords[2]);
    void move(array<int,2> coords);
    
    void moveto(int coords[2]);
    void moveto(array<int,2> coords);

    int* getPos();
    
    Movable() {
        pos[0]=pos[1]=pos[2]=pos[3]=0;
        width=height=1;
    }
    
    Movable(int x,int y) {
        pos[0]=x;
        pos[1]=y;
        pos[2]=x;
        pos[3]=y;
        width=height=1;
    }

    Movable(int x1,int y1,int x2,int y2) {
        pos[0]=x1;
        pos[1]=y1;
        pos[2]=x2;
        pos[3]=y2;
        if (x1>x2 || y1>y2) {
            throw exception();
        }
        width=x2-x1;
        height=y2-y1;
    }
    
    public:
    
    bool collide(Movable a);
    
};
#endif