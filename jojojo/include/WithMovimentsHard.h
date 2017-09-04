#ifndef WITHMOVIMENTSHARD_H
#define WITHMOVIMENTSHARD_H
#include "WithMoviments.h"
#include"HerenciaPadre.h"

class WithMovimentsHard:public WithMoviments
{
    public:
        WithMovimentsHard(map<string,sf::Drawable*>& drawables);
        void act();
        void lost();
        void win();
        void comparations();
        void guardar(string nombre, int ganados, int perdidos);
        void info();
        void loop();
        void update();
        void events();
        void playAgain();
        void scramble();
};

#endif // WITHMOVIMENTSHARD_H
