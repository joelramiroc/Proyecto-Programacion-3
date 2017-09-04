#ifndef WITHMOVIMENTSNORMAL_H
#define WITHMOVIMENTSNORMAL_H
#include "WithMoviments.h"
#include"HerenciaPadre.h"

class WithMovimentsNormal:public WithMoviments
{
    public:
        WithMovimentsNormal(map<string,sf::Drawable*>& drawables);
        void comparations();
        void guardar(string nombre, int ganados, int perdidos);
        void info();
        void loop();
        void update();
        void events();
        void act();
        void lost();
        void win();
        void scramble();
        void playAgain();
};

#endif // WITHMOVIMENTSNORMAL_H
