#ifndef GROUND_DEF
#define GROUND_DEF
#include <string>
#include <iostream>
using namespace std;

class Ground {
    friend class Drawable;

    private:
    string **mat;
    char OPENCHAR;
    char CLOSECHAR;
    int WIDTH;
    int HEIGHT;
    
    //void draw(char img,int pos[2]);
    void draw(char img,int pos[]);
    
    public:

    Ground(int width,int height) : Ground(width,height,'[',']') {}

    Ground(int width,int height,char openchar,char closechar) {
        OPENCHAR = openchar;
        CLOSECHAR = closechar;
        WIDTH = width;
        HEIGHT = height;

        mat = new string*[HEIGHT];
        for (int y=0; y < HEIGHT; y++) {
            mat[y] = new string[WIDTH];
            for (int x=0; x < WIDTH; x++) {
                char val[4] = {OPENCHAR,' ',CLOSECHAR,0};
                mat[y][x] = string(val);
            }
        }
    }

    int getWidth() const {return WIDTH;}

    int getHeight() const {return HEIGHT;}

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