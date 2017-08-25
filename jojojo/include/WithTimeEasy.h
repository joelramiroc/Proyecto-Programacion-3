#ifndef WITHTIMEEASY_H
#define WITHTIMEEASY_H
#include"WithTime.h"

class WithTimeEasy:public WithTime
{
    public:
        WithTimeEasy(map<string,sf::Drawable*>& drawables);
        void comparations();
        void guardar();
        void info();
        void loop();
        void update();
        void events();

};

#endif // WITHTIMEEASY_H
