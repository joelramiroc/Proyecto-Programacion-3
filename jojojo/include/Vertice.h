#ifndef VERTICE_H
#define VERTICE_H
#include"Piece.h"

class Vertice:public Piece
{
    public:
        void MovementArriba();
        void MovementAbajo();
        void MovementIzquierda();
        void MovementDerecha();
        Vertice(sf::Color &arriba,sf::Color &abajo,sf::Color &atras,sf::Color &frente,sf::Color &derecha,sf::Color &izquierda);

};

#endif // VERTICE_H
