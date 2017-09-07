#ifndef WITHMOVIMENTSNORMAL_H
#define WITHMOVIMENTSNORMAL_H
#include "WithMoviments.h"
#include"HerenciaPadre.h"
#include"Cube.h"

class WithMovimentsNormal:public WithMoviments
{
     public:
        WithMovimentsNormal(map<string,sf::Drawable*>& drawables, Cube* &cube,Window& window_,string nombrePlayer);
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
        void win();
        void playAgain();
        Cube* cube;
        Window window_;
        map<string,sf::Drawable*>* temp;
};

#endif // WITHMOVIMENTSNORMAL_H
