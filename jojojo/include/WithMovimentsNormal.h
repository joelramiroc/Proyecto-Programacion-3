#ifndef WITHMOVIMENTSNORMAL_H
#define WITHMOVIMENTSNORMAL_H
#include "WithMoviments.h"

class WithMovimentsNormal:WithMoviments
{
    public:
        WithMovimentsNormal(map<string,sf::Drawable*>& drawables);
        void comparations();
        void guardar();
        void info();
        void loop();
        void update();
        void events();
};

#endif // WITHMOVIMENTSNORMAL_H
