#ifndef PIECE_H
#define PIECE_H
#include <iostream>
#include"SpriteObjet.h"
#include<SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include"PieceFaces.h"
using namespace std;

class Piece
{
    public:
        vector<sf::Color> horizontalRotacion;
        vector<sf::Color> verticalRotacion;
        Piece();
        Piece* arriba;
        Piece* abajo;
        Piece* izquierda;
        Piece* derecha;
        virtual void MovementArriba()=0;
        virtual void MovementAbajo()=0;
        virtual void MovementIzquierda()=0;
        virtual void MovementDerecha()=0;
};
#endif // PIECE_H
