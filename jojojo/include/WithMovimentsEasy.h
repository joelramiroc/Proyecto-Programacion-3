#ifndef WITHMOVIMENTSEASY_H
#define WITHMOVIMENTSEASY_H
#include"WithMoviments.h"

class WithMovimentsEasy:WithMoviments
{
    public:
        WithMovimentsEasy(map<string,sf::Drawable*>& drawables);

        void comparations();
        void guardar();
        void info();
        void loop();
        void update();
        void events();
};

#endif // WITHMOVIMENTSEASY_H
