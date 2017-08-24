#ifndef LIBRE_H
#define LIBRE_H
#include "HerenciaPadre.h"
#include<vector>
#include<SFML/Graphics.hpp>
#include<iostream>
#include "Window.h"
using namespace std;
class Libre:public HerenciaPadre
{
    public:
        Libre(vector<sf::Drawable*>* drawables);
        void comparations();
        void guardar();
        void info();
        void loop();
        void update();
        void events();
};

#endif // LIBRE_H
