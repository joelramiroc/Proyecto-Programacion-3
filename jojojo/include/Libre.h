#ifndef LIBRE_H
#define LIBRE_H
#include "HerenciaPadre.h"
#include<vector>
#include<SFML/Graphics.hpp>
#include<iostream>
#include "Window.h"
#include"Cube.h"
using namespace std;
class Libre:public HerenciaPadre
{
    public:

        Libre(map<string,sf::Drawable*>& drawables, Cube* &cube,Window& window_);
        void comparations();
        void guardar(string nombre, int ganados, int perdidos);
        void cleared();
        void info();
        void loop();
        void update();
        void events();
        void act();
        void lost();
        void scramble();
        void playAgain();
        void win();
        Cube* cube;
        int contara=0;
        Window window_;
        map<string,sf::Drawable*>* temp;
};

#endif // LIBRE_H
