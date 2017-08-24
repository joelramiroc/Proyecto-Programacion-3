#ifndef WITHTIME_H
#define WITHTIME_H
#include"HerenciaPadre.h"


class WithTime: public HerenciaPadre{
    public:
    long tiempoLimite,tiempoTranscurrido;
    WithTime();
    virtual void comparations()=0;
    virtual void guardar()=0;
    virtual void info()=0;
    virtual void loop()=0;
    virtual void events()=0;
    virtual void update()=0;

};

#endif // WITHTIME_H
