#ifndef ARISTA_H
#define ARISTA_H
#include"Piece.h"
class Arista:public Piece
{
    public:
        void MovementArriba();
        void MovementAbajo();
        void MovementIzquierda();
        void MovementDerecha();
        void MovementGiroDerecha();
        void MovementGiroIzquierda();

        Arista(sf::Color &arriba,sf::Color &abajo,sf::Color &atras,sf::Color &frente,sf::Color &derecha,sf::Color &izquierda);

};

#endif // ARISTA_H
