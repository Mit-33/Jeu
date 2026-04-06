#ifndef GROUND_DEF
#define GROUND_DEF
#include <string>
using namespace std;

class Ground {
    friend class Drawable;

    private:
    string **mat;
    const char OPENCHAR = '[';
    const char CLOSECHAR = ']';
    
    //void draw(char img,int pos[2]);
    void draw(char img,int pos[]);
    
    public:
    const int WIDTH = 5;
    const int HEIGHT = 5;

    Ground() {
        mat = new string*[HEIGHT];
        for (int y=0; y < HEIGHT; y++) {
            mat[y] = new string[WIDTH];
            for (int x=0; x < WIDTH; x++) {
                char val[4] = {OPENCHAR,' ',CLOSECHAR,0};
                mat[y][x] = string(val);
            }
        }
    }

    void clear();

    string str();

    ~Ground() {
        if (mat != NULL) {
            for (int y=0; y < HEIGHT; y++) {
                delete[] mat[y];
            }
            delete[] mat;
        }
    }
};
#endif