#ifndef WITHMOVIMENTSHARD_H
#define WITHMOVIMENTSHARD_H
#include "WithMoviments.h"
#include"HerenciaPadre.h"
#include"Cube.h"
class WithMovimentsHard:public WithMoviments
{
    public:
        WithMovimentsHard(map<string,sf::Drawable*>& drawables, Cube* &cube,Window& window_,string nombrePlayer);
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

#endif // WITHMOVIMENTSHARD_H
