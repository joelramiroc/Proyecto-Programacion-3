#ifndef WITHTIMENORMAL_H
#define WITHTIMENORMAL_H
#include "WithTime.h"


class WithTimeNormal: public WithTime
{
 public:
    WithTimeNormal(map<string,sf::Drawable*>& drawables);
     void comparations();
     void guardar(string nombre, int ganados, int perdidos);
     void info();
     void loop();
     void update();
     void events();
     void act();
     void playAgain();
     void lost();
     void win();
     void scramble();
};

#endif // WITHTIMENORMAL_H
