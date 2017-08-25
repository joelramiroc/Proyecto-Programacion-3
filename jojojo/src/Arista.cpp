#include "Arista.h"

Arista::Arista(sf::Color &arriba,sf::Color &abajo,sf::Color &atras,sf::Color &frente,sf::Color &derecha,sf::Color &izquierda)
{
    positions["frente"]=&frente;
    positions["derecha"]=&derecha;
    positions["atras"]=&atras;
    positions["izquierda"]=&izquierda;
    positions["arriba"]=&arriba;
    positions["abajo"]=&abajo;
}

        void Arista:: MovementArriba(){};
        void Arista:: MovementAbajo(){};
        void Arista:: MovementIzquierda(){};
        void Arista:: MovementDerecha(){};
