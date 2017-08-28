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
        void guardar();
        void cleared();
        void info();
        void loop();
        void act();
        void update();
        void events();
        Cube* cube;
        Window window_;
        map<string,sf::Drawable*>* temp;

};

#endif // LIBRE_H
