#ifndef CUBE_H
#define CUBE_H
#include"Piece.h"
#include "Arista.h"
#include "Centro.h"
#include "Vertice.h"
#include<SFML/Graphics.hpp>

class Cube
{
    public:
        Cube();
        sf::Color verde;
        sf::Color amarillo;
        sf::Color azul;
        sf::Color rojo;
        sf::Color naranja;
        sf::Color blanco;
        sf::Color negro;

        Piece* p1;
        Piece* p2;
        Piece* p3;
        Piece* p4;
        Piece* p5;
        Piece* p6;
        Piece* p7;
        Piece* p8;
        Piece* p9;
        Piece* p10;
        Piece* p11;
        Piece* p12;
        Piece* p13;
        Piece* p14;
        Piece* p15;
        Piece* p16;
        Piece* p17;
        Piece* p18;
        Piece* p19;
        Piece* p20;
        Piece* p21;
        Piece* p22;
        Piece* p23;
        Piece* p24;
        Piece* p25;
        Piece* p26;

        void movementArriba(Piece& piece);
        void movementAbajo(Piece& piece);
        void movementDerecha(Piece& piece);
        void movementIzquiera(Piece& piece);
};

#endif // CUBE_H
