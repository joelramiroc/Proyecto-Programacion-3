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
        void MovementArriba();
        void MovementAbajo();
        void MovementIzquierda();
        void MovementDerecha();
        void MovementGiroDerecha();
        void MovementGiroIzquierda();
        Piece(sf::Color &arriba,sf::Color &abajo,sf::Color &atras,sf::Color &frente,sf::Color &derecha,sf::Color &izquierda);



};
#endif // PIECE_H
