#ifndef WITHMOVIMENTSHARD_H
#define WITHMOVIMENTSHARD_H
#include "WithMoviments.h"

class WithMovimentsHard:WithMoviments
{
    public:
        WithMovimentsHard(map<string,sf::Drawable*>& drawables);
        void comparations();
        void guardar();
        void info();
        void loop();
        void update();
        void events();
};

#endif // WITHMOVIMENTSHARD_H
