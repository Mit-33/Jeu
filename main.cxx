#include <iostream>
#include <string>
#include <array>
using namespace std;

#include "Ground.h"
#include "Player.h"
#include "Enemy.h"
#include "Object.h"

int main() {
    Ground ground;
    Player player(2,2);

    Enemy enemys[1] = {Enemy(0,2)};

    Object objects[1] = {Object(0,0)};

    string key;

    player.draw(ground);

    for (auto &object: objects) {
        object.draw(ground);
    }

    for (auto &enemy: enemys) {
        enemy.draw(ground);   
    }
    cout << ground.str() << "score : " << player.score << endl;

    bool run = true;

    while (run) {
        // Obtention de l'action
        cin >> key;

        ground.clear();

        if (key=="quit"||key=="stop") {
            break;
        } else {
            system("cls");
        }

        player.update(key,ground);

        // Dessin joueur
        player.draw(ground);

        for (auto &object: objects) {
            if (player.collide(object)) {
                player.score++;
                object.respawn(ground);
            }
            object.update(ground);
            object.draw(ground);
        }

        for (auto &enemy: enemys) {
            enemy.update(ground);
            enemy.draw(ground);
            if (player.collide(enemy)) {
                cout << "Vous avez perdu !" << endl;
                run = false;
            }
        }


        // Affichage
        cout << ground.str() << "score : " << player.score << endl;
    }
    system("pause");
}