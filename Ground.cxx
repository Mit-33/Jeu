#include <string>
#include <iostream>
using namespace std;
#include "Ground.h"

string Ground::str() {
    string val;

    for (int y=0; y < HEIGHT; y++) {
        for (int x=0; x < WIDTH; x++) {
            val += mat[y][x];
        }
        val += string("\n");
    }

    return val;
}

/*
void Ground::draw(char img,int pos[2]) {
    char val[4] = {OPENCHAR,img,CLOSECHAR,0};
    mat[pos[1]][pos[0]] = string(val);
}
*/

void Ground::draw(char img,int pos[]) {
    char val[4] = {OPENCHAR,img,CLOSECHAR,0};
    for (int y=pos[1]; y <= pos[3]; y++)
        for (int x=pos[0]; x <= pos[2]; x++)
            mat[y][x] = string(val);
}

void Ground::clear() {
    for (int y=0; y < HEIGHT; y++) {
        // delete[] mat[y];
        // mat[y] = new string[WIDTH];
        for (int x=0; x < WIDTH; x++) {
            char val[4] = {OPENCHAR,' ',CLOSECHAR,0};
            mat[y][x] = string(val);
        }
    }
}