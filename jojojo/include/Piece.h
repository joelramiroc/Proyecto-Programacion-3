#ifndef PIECE_H
#define PIECE_H
#include <iostream>
#include"SpriteObjet.h"
#include<SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include"PieceFaces.h"
#include<map>
using namespace std;

class Piece
{
    public:
        map<string, sf::Color*> temporal;
        map<string,sf::Color*> positions;
        Piece();
        Piece** arriba;
        Piece** abajo;
        Piece** izquierda;
        Piece** derecha;
        virtual void MovementArriba()=0;
        virtual void MovementAbajo()=0;
        virtual void MovementIzquierda()=0;
        virtual void MovementDerecha()=0;
};
#endif // PIECE_H
