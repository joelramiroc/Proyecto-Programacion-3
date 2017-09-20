#ifndef WITHMOVIMENTS_H
#define WITHMOVIMENTS_H
#include"HerenciaPadre.h"
#include<iostream>
#include"Cube.h"

using namespace std;

class WithMoviments:public HerenciaPadre
{
    public:
        WithMoviments(map<string,sf::Drawable*>& drawables, Cube* &cube,Window& window_,string nombrePlayer,string tipeOfGame,string level);
        void comparations();
        void guardar(string nombre, int ganados, int perdidos);
        void cleared();
        void info();
        void loop();
        void load();
        void update();
        void events();
        void act();
        void lost();
        void scramble();
        void win();
        void playAgain();
        Cube* cube;
        Window window_;

        map<string,sf::Drawable*>* temp;
        map<string,sf::Drawable*> backroundP;

};

#endif // WITHMOVIMENTS_H
