#include "Cube.h"

Cube::Cube()
{
    verde= sf::Color::Green;
        negro= sf::Color::Black;
        azul= sf::Color::Blue;
        naranja= sf::Color::Magenta;
        rojo= sf::Color::Red;
        blanco= sf::Color::White;
        amarillo =sf::Color::Yellow;


        p1=new Vertice(blanco,negro,negro,verde,negro,naranja);
        p3=new Vertice(blanco,negro,negro,verde,rojo,negro);
        p7=new Vertice(blanco,negro,azul,negro,negro,naranja);
        p9=new Vertice(blanco,negro,azul,negro,rojo,negro);
        p18=new Vertice(negro,amarillo,negro,verde,negro,naranja);
        p20=new Vertice(negro,amarillo,negro,verde,rojo,negro);
        p24=new Vertice(negro,amarillo,azul,negro,negro,naranja);
        p26=new Vertice(negro,amarillo,azul,negro,rojo,negro);
        p2=new Arista(blanco,negro,negro,verde,negro,negro);
        p4=new Arista(blanco,negro,negro,negro,negro,naranja);
        p6=new Arista(blanco,negro,negro,negro,rojo,negro);
        p8=new Arista(blanco,negro,azul,negro,negro,negro);
        p10=new Arista(negro,negro,negro,verde,negro,naranja);
        p12=new Arista(negro,negro,negro,verde,rojo,negro);
        p14=new Arista(negro,negro,azul,negro,rojo,negro);
        p16=new Arista(negro,negro,azul,negro,negro,naranja);
        p19=new Arista(negro,amarillo,negro,verde,negro,negro);
        p21=new Arista(negro,amarillo,negro,negro,negro,naranja);
        p23=new Arista(negro,amarillo,negro,negro,rojo,negro);
        p25=new Arista(negro,amarillo,azul,negro,negro,negro);

        p5=new Centro(blanco,negro,negro,negro,negro,negro);
        p11=new Centro(negro,negro,negro,verde,negro,negro);
        p13=new Centro(negro,negro,negro,negro,rojo,negro);
        p15=new Centro(negro,negro,azul,negro,negro,negro);
        p17=new Centro(negro,negro,negro,negro,negro,naranja);
        p22=new Centro(negro,amarillo,negro,negro,negro,negro);


    this->p1->arriba=p7;
    this->p1->abajo=p18;
    this->p1->derecha=p3;
    this->p1->izquierda=p7;

    this->p3->arriba=p9;
    this->p3->abajo=p20;
    this->p3->derecha=p9;
    this->p3->izquierda=p1;

    this->p7->arriba=p24;
    this->p7->abajo=p1;
    this->p7->derecha=p1;
    this->p7->izquierda=p9;

    this->p9->arriba=p26;
    this->p9->abajo=p3;
    this->p9->derecha=p7;
    this->p9->izquierda=p3;

    this->p18->arriba=p1;
    this->p18->abajo=p24;
    this->p18->derecha=p20;
    this->p18->izquierda=p24;

    this->p20->arriba=p3;
    this->p20->abajo=p26;
    this->p20->derecha=p26;
    this->p20->izquierda=p18;

    this->p24->arriba=p18;
    this->p24->abajo=p7;
    this->p24->derecha=p18;
    this->p24->izquierda=p26;

    this->p26->arriba=p20;
    this->p26->abajo=p9;
    this->p26->derecha=p24;
    this->p26->izquierda=p20;



    this->p2->arriba=p8;
    this->p2->abajo=p19;
    this->p2->derecha=p6;
    this->p2->izquierda=p4;

    this->p4->arriba=p16;
    this->p4->abajo=p10;
    this->p4->derecha=p2;
    this->p4->izquierda=p8;

    this->p6->arriba=p14;
    this->p6->abajo=p12;
    this->p6->derecha=p8;
    this->p6->izquierda=p2;

    this->p8->arriba=p25;
    this->p8->abajo=p2;
    this->p8->derecha=p4;
    this->p8->izquierda=p6;

    this->p10->arriba=p4;
    this->p10->abajo=p21;
    this->p10->derecha=p12;
    this->p10->izquierda=p16;

    this->p12->arriba=p6;
    this->p12->abajo=p23;
    this->p12->derecha=p14;
    this->p12->izquierda=p10;

    this->p14->arriba=p23;
    this->p14->abajo=p6;
    this->p14->derecha=p16;
    this->p14->izquierda=p12;

    this->p16->arriba=p21;
    this->p16->abajo=p4;
    this->p16->derecha=p10;
    this->p16->izquierda=p14;

    this->p19->arriba=p2;
    this->p19->abajo=p25;
    this->p19->derecha=p23;
    this->p19->izquierda=p21;

    this->p21->arriba=p10;
    this->p21->abajo=p16;
    this->p21->derecha=p19;
    this->p21->izquierda=p25;

    this->p23->arriba=p12;
    this->p23->abajo=p14;
    this->p23->derecha=p25;
    this->p23->izquierda=p19;

    this->p25->arriba=p19;
    this->p25->abajo=p8;
    this->p25->derecha=p21;
    this->p25->izquierda=p23;
}


void Cube::movementArriba(Piece& piece)
{
    /*Piece* temporal;
    temporal= piece.arriba;
    piece=piece->arriba;
    temporal= piece->arriba;
    piece=piece->arriba;
    temporal= piece->arriba;
    piece=piece->arriba;
    temporal=& piece->arriba;
    piece=piece->arriba;*/
}

void Cube::movementAbajo(Piece& piece)
{
    /*Piece* temporal;
    temporal=& piece->abajo;
    piece=&piece->abajo;
    temporal=& piece->abajo;
    piece=&piece->abajo;
    temporal=& piece->abajo;
    piece=&piece->abajo;
    temporal=& piece->abajo;
    piece=&piece->abajo;
*/
}

void Cube::movementDerecha(Piece& piece)
{
  /*  Piece* temporal;
    temporal=& piece->derecha;
    piece=&piece->derecha;
    temporal=& piece->derecha;
    piece=&piece->derecha;
    temporal=& piece->derecha;
    piece=&piece->derecha;
    temporal=& piece->derecha;
    piece=&piece->derecha;*/
}

void Cube::movementIzquiera(Piece& piece)
{
    /*Piece* temporal;
    temporal=& piece->izquierda;
    piece=&piece->izquierda;
    temporal=& piece->izquierda;
    piece=&piece->izquierda;
    temporal=& piece->izquierda;
    piece=&piece->izquierda;
    temporal=& piece->izquierda;
    piece=&piece->izquierda;*/
}
