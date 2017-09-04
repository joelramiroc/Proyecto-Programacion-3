#ifndef WITHTIMEEASY_H
#define WITHTIMEEASY_H
#include"WithTime.h"

class WithTimeEasy:public WithTime
{
    public:
        WithTimeEasy(map<string,sf::Drawable*>& drawables);
        void comparations();
        void guardar(string nombre, int ganados, int perdidos);
        void info();
        void loop();
        void update();
        void events();
        void act();
        void lost();
        void playAgain();
        void win();
        void scramble();

};

#endif // WITHTIMEEASY_H
