#ifndef WITHTIMEHARD_H
#define WITHTIMEHARD_H
#include "WithTime.h"

class WithTimeHard:public WithTime
{
    public:
    WithTimeHard(vector<sf::Drawable*>& drawables);
    void comparations();
    void guardar();
    void info();
    void loop();
    void update();
    void events();
};

#endif // WITHTIMEHARD_H
