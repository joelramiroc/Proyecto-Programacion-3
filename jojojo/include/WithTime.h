#ifndef WITHTIME_H
#define WITHTIME_H
#include"HerenciaPadre.h"
#include<iostream>
#include"Cube.h"


class WithTime: public HerenciaPadre{
    public:
    public:
        WithTime(map<string,sf::Drawable*>& drawables, Cube* &cube,Window& window_,string nombrePlayer,string tipeOfGame,string level);
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
        void tiempoT();
        Cube* cube;
        Window window_;
        sf::Clock timeP;
        sf::Time calcTime;
        map<string,sf::Drawable*>* temp;
        map<string,sf::Drawable*> backroundP;

};

#endif // WITHTIME_H
