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

void Centro:: MovementArriba()
{
    temporal["arriba"]=positions["arriba"];
    temporal["atras"]=positions["atras"];
    temporal["abajo"]=positions["abajo"];
    temporal["frente"]=positions["frente"];

    positions["arriba"]=temporal["frente"];
    positions["atras"]=temporal["arriba"];
    positions["abajo"]=temporal["atras"];
    positions["frente"]=temporal["abajo"];
};

void Centro:: MovementAbajo()
{
    temporal["arriba"]=positions["arriba"];
    temporal["atras"]=positions["atras"];
    temporal["abajo"]=positions["abajo"];
    temporal["frente"]=positions["frente"];

    positions["arriba"]=temporal["atras"];
    positions["atras"]=temporal["abajo"];
    positions["abajo"]=temporal["frente"];
    positions["frente"]=temporal["arriba"];

};

void Centro:: MovementIzquierda()
{
    temporal["izquierda"]=positions["izquierda"];
    temporal["atras"]=positions["atras"];
    temporal["derecha"]=positions["derecha"];
    temporal["frente"]=positions["frente"];

    positions["izquierda"]=temporal["atras"];
    positions["atras"]=temporal["derecha"];
    positions["derecha"]=temporal["frente"];
    positions["frente"]=temporal["izquierda"];

};

void Centro:: MovementDerecha()
{
    temporal["izquierda"]=positions["izquierda"];
    temporal["atras"]=positions["atras"];
    temporal["derecha"]=positions["derecha"];
    temporal["frente"]=positions["frente"];

    positions["izquierda"]=temporal["frente"];
    positions["atras"]=temporal["izquierda"];
    positions["derecha"]=temporal["atras"];
    positions["frente"]=temporal["derecha"];
};
