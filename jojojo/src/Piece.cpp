#include "Piece.h"

Piece::Piece(sf::Color &arriba,sf::Color &abajo,sf::Color &atras,sf::Color &frente,sf::Color &derecha,sf::Color &izquierda)
{
    this->arriba=NULL;
    this->abajo=NULL;
    this->izquierda=NULL;
    this->derecha=NULL;
    positions["frente"]=&frente;
    positions["derecha"]=&derecha;
    positions["atras"]=&atras;
    positions["izquierda"]=&izquierda;
    positions["arriba"]=&arriba;
    positions["abajo"]=&abajo;
}


void Piece:: MovementArriba()
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

void Piece:: MovementAbajo()
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

void Piece:: MovementIzquierda()
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

void Piece:: MovementDerecha()
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


void Piece::MovementGiroDerecha()
{
    temporal["izquierda"]=positions["izquierda"];
    temporal["arriba"]=positions["arriba"];
    temporal["derecha"]=positions["derecha"];
    temporal["abajo"]=positions["abajo"];

    positions["izquierda"]=temporal["abajo"];
    positions["abajo"]=temporal["derecha"];
    positions["derecha"]=temporal["arriba"];
    positions["arriba"]=temporal["izquierda"];
}


void Piece::MovementGiroIzquierda()
{
    temporal["izquierda"]=positions["izquierda"];
    temporal["arriba"]=positions["arriba"];
    temporal["derecha"]=positions["derecha"];
    temporal["abajo"]=positions["abajo"];

    positions["izquierda"]=temporal["arriba"];
    positions["arriba"]=temporal["derecha"];
    positions["derecha"]=temporal["abajo"];
    positions["abajo"]=temporal["izquierda"];
}
