#ifndef HERENCIAPADRE_H
#define HERENCIAPADRE_H
#include <iostream>
#include <fstream>
#include<SFML/Graphics.hpp>
#include<vector>
#include"Window.h"
using namespace std;

class HerenciaPadre
{
public:
    sf::Event miEvento;
    int azul,verde,amarillo,blanco,rojo,naranja,noExiste;
    int ganados,perdidos,score;
    bool l,ll,r,rr,d,dd,u,uu,s,ss,m,mm,b,bb,f,ff,t,tt,repetir;
    string archivo, typeGame,nivelDificultad,nombreJugador;
    virtual void comparations()=0;
    virtual void guardar()=0;
    virtual void info()=0;
    virtual void loop()=0;
    virtual void events()=0;
    virtual void update()=0;
    //vector<sf::Drawable*>* drawables;
    vector<sf::Sprite*> sprites;
    HerenciaPadre();
};

#endif // HERENCIAPADRE_H
