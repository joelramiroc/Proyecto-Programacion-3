#ifndef WITHTIMENORMAL_H
#define WITHTIMENORMAL_H
#include "WithTime.h"


class WithTimeNormal: public WithTime
{
 public:
    WithTimeNormal(map<string,sf::Drawable*>& drawables);
     void comparations();
     void guardar();
     void info();
     void loop();
     void update();
     void events();
};

#endif // WITHTIMENORMAL_H
