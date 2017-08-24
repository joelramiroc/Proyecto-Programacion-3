#ifndef WITHMOVIMENTS_H
#define WITHMOVIMENTS_H
#include"HerenciaPadre.h"

class WithMoviments:public HerenciaPadre
{
    public:
        WithMoviments();
        long movimientosLimite,movimientosRealizados;
        virtual void comparations()=0;
        virtual void guardar()=0;
        virtual void info()=0;
        virtual void loop()=0;
        virtual void events()=0;
        virtual void update()=0;

};

#endif // WITHMOVIMENTS_H
