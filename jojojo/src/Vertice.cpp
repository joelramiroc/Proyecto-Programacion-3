#include "Vertice.h"

Vertice::Vertice(sf::Color arriba,sf::Color abajo,sf::Color atras,sf::Color frente,sf::Color derecha,sf::Color izquierda)
{
    horizontalRotacion.push_back(frente);
    horizontalRotacion.push_back(derecha);
    horizontalRotacion.push_back(atras);
    horizontalRotacion.push_back(izquierda);

    verticalRotacion.push_back(frente);
    verticalRotacion.push_back(arriba);
    verticalRotacion.push_back(atras);
    verticalRotacion.push_back(abajo);
}

    void Vertice:: MovementArriba(){};
    void Vertice:: MovementAbajo(){};
    void Vertice:: MovementIzquierda(){};
    void Vertice:: MovementDerecha(){};

