#include "Centro.h"

Centro::Centro(sf::Color &arriba,sf::Color &abajo,sf::Color &atras,sf::Color &frente,sf::Color &derecha,sf::Color &izquierda)
{
    positions["frente"]=&frente;
    positions["derecha"]=&derecha;
    positions["atras"]=&atras;
    positions["izquierda"]=&izquierda;
    positions["arriba"]=&arriba;
    positions["abajo"]=&abajo;
}

        void Centro:: MovementArriba(){};
        void Centro:: MovementAbajo(){};
        void Centro:: MovementIzquierda(){};
        void Centro:: MovementDerecha(){};
