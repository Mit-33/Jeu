#include "Ground.h"
#include "MoveDraw.h"
#include <unordered_map>
#include <array>
class Player : public MoveDraw {
    private:

    const unordered_map<string,array<int,2>> keys = {{"z",array<int,2>({0,-1})},
                                               {"s",array<int,2>({0,1})},
                                               {"q",array<int,2>({-1,0})},
                                               {"d",array<int,2>({1,0})}};

    public:
    int score;
    Player() : MoveDraw() {
        img = '&';
        score = 0;
    }

    void update(string key,Ground &ground);

    Player(int x,int y) : MoveDraw(x,y) {
        img = '&';
        score = 0;
    }
};