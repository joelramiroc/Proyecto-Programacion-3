#include "Vertice.h"

Vertice::Vertice(sf::Color &arriba,sf::Color &abajo,sf::Color &atras,sf::Color &frente,sf::Color &derecha,sf::Color &izquierda)
{
    positions["frente"]=&frente;
    positions["derecha"]=&derecha;
    positions["atras"]=&atras;
    positions["izquierda"]=&izquierda;
    positions["arriba"]=&arriba;
    positions["abajo"]=&abajo;
}

    void Vertice:: MovementArriba()
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

    void Vertice:: MovementAbajo()
    {

    temporal["arriba"]=positions["arriba"];
    temporal["atras"]=positions["atras"];
    temporal["abajo"]=positions["abajo"];
    temporal["frente"]=positions["frente"];

    positions["arriba"]=temporal["atras"];
    positions["frente"]=temporal["arriba"];
    positions["abajo"]=temporal["frente"];
    positions["atras"]=temporal["abajo"];
    };
    void Vertice:: MovementIzquierda()
    {

    temporal["derecha"]=positions["derecha"];
    temporal["atras"]=positions["atras"];
    temporal["izquierda"]=positions["izquierda"];
    temporal["frente"]=positions["frente"];

    positions["derecha"]=temporal["atras"];
    positions["atras"]=temporal["izquierda"];
    positions["izquierda"]=temporal["frente"];
    positions["frente"]=temporal["derecha"];
    };

    void Vertice:: MovementDerecha()
    {
    temporal["derecha"]=positions["derecha"];
    temporal["atras"]=positions["atras"];
    temporal["izquierda"]=positions["izquierda"];
    temporal["frente"]=positions["frente"];

    positions["derecha"]=temporal["frente"];
    positions["frente"]=temporal["izquierda"];
    positions["izquierda"]=temporal["atras"];
    positions["atras"]=temporal["derecha"];
    };

