#ifndef WITHTIMEHARD_H
#define WITHTIMEHARD_H
#include "WithTime.h"

class WithTimeHard:public WithTime
{
    public:
    WithTimeHard(map<string,sf::Drawable*>& drawables);
    void comparations();
    void guardar(string nombre, int ganados, int perdidos);
    void info();
    void loop();
    void update();
    void events();
    void act();
    void lost();
    void win();
    void playAgain();
    void scramble();
};

#endif // WITHTIMEHARD_H
