#ifndef WITHMOVIMENTS_H
#define WITHMOVIMENTS_H
#include"HerenciaPadre.h"
#include<iostream>

using namespace std;

class WithMoviments:public HerenciaPadre
{
    public:
        WithMoviments();
        long movimientosLimite,movimientosRealizados;
        virtual void comparations()=0;
        virtual void guardar(string nombre, int ganados, int perdidos)=0;
        virtual void playAgain()=0;
        virtual void info()=0;
        virtual void loop()=0;
        virtual void events()=0;
        virtual void update()=0;
        virtual void win()=0;
        virtual void lost()=0;
        virtual void act()=0;
        virtual void scramble()=0;
        int contara;


};

#endif // WITHMOVIMENTS_H
