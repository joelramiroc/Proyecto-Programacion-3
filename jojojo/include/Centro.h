#ifndef CENTRO_H
#define CENTRO_H
#include"Piece.h"

class Centro:public Piece
{
    public:
        void MovementArriba();
        void MovementAbajo();
        void MovementIzquierda();
        void MovementDerecha();
        Centro(sf::Color &arriba,sf::Color &abajo,sf::Color &atras,sf::Color &frente,sf::Color &derecha,sf::Color &izquierda);

};

#endif // CENTRO_H
