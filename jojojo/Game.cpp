#include "Game.h"
#include<iostream>
using namespace std;

Game::Game(Window& window) : window_(window)
{
    string nombreArchivo;
    nombreArchivo="Estadisticas_Del_Juego";
    ofstream archivo(nombreArchivo);
}

int Game::inicializar()
{
    if(!letra.loadFromFile("fonts/Wedgie Regular.ttf")){
    return 1;
    }
    miTexto.setFont(letra);
    miTexto.setCharacterSize(70);
    miTexto.setString("Rubik Cube");
    miTexto.setColor(sf::Color::Blue);
    miTexto.setPosition(sf::Vector2f(100.f,70.f));


    if(!f1_p1_textC.loadFromFile("img/blanco/BLANCO1C.png")){
        return 1;
    };
    f1_p1_sprtC.setTexture(f1_p1_textC);
    f1_p1_sprtC.setColor(*(cube->p18->positions["frente"]));
    f1_p1_sprtC.setPosition(sf::Vector2f(170.f,570.f));
    if(!f1_p2_textC.loadFromFile("img/blanco/BLANCO2C.png")){
        return 1;
    };
    f1_p2_sprtC.setTexture(f1_p2_textC);
    f1_p2_sprtC.setColor(*(cube->p19->positions["frente"]));
    f1_p2_sprtC.setPosition(sf::Vector2f(215.f,557.f));
    if(!f1_p3_textC.loadFromFile("img/blanco/BLANCO3C.png")){
        return 1;
    };
    f1_p3_sprtC.setTexture(f1_p3_textC);
    f1_p3_sprtC.setColor(*(cube->p20->positions["frente"]));
    f1_p3_sprtC.setPosition(sf::Vector2f(266.f,539.f));
    if(!f1_p4_textC.loadFromFile("img/blanco/BLANCO4C.png")){
        return 1;
    };
    f1_p4_sprtC.setTexture(f1_p4_textC);
    f1_p4_sprtC.setColor(*(cube->p10->positions["frente"]));
    f1_p4_sprtC.setPosition(sf::Vector2f(125.f,555.f));
    if(!f1_p5_textC.loadFromFile("img/blanco/BLANCO5C.png")){
        return 1;
    };
    f1_p5_sprtC.setTexture(f1_p5_textC);
    f1_p5_sprtC.setColor(*(cube->p11->positions["frente"]));
    f1_p5_sprtC.setPosition(sf::Vector2f(180.f,537.f));
    if(!f1_p6_textC.loadFromFile("img/blanco/BLANCO6C.png")){
        return 1;
    };
    f1_p6_sprtC.setTexture(f1_p6_textC);
    f1_p6_sprtC.setColor(*(cube->p12->positions["frente"]));
    f1_p6_sprtC.setPosition(sf::Vector2f(221.f,508.f));
    if(!f1_p7_textC.loadFromFile("img/blanco/BLANCO7C.png")){
        return 1;
    };
    f1_p7_sprtC.setTexture(f1_p7_textC);
    f1_p7_sprtC.setColor(*(cube->p1->positions["frente"]));
    f1_p7_sprtC.setPosition(sf::Vector2f(70.f,537.f));
    if(!f1_p8_textC.loadFromFile("img/blanco/BLANCO8C.png")){
        return 1;
    };
    f1_p8_sprtC.setTexture(f1_p8_textC);
    f1_p8_sprtC.setColor(*(cube->p2->positions["frente"]));
    f1_p8_sprtC.setPosition(sf::Vector2f(117.f,508.f));
    if(!f1_p9_textC.loadFromFile("img/blanco/BLANCO9C.png")){
        return 1;
    };
    f1_p9_sprtC.setTexture(f1_p9_textC);
    f1_p9_sprtC.setColor(*(cube->p3->positions["frente"]));
    f1_p9_sprtC.setPosition(sf::Vector2f(170.f,473.f));
    if(!f1_p1_textA.loadFromFile("img/blanco/BLANCO1A.png")){
        return 1;
    };
    f1_p1_sprtA.setTexture(f1_p1_textA);
    f1_p1_sprtA.setColor(*(cube->p1->positions["arriba"]));
    f1_p1_sprtA.setPosition(sf::Vector2f(65.f,470.f));

    if(!f1_p2_textA.loadFromFile("img/blanco/BLANCO2A.png")){
        return 1;
    };
    f1_p2_sprtA.setTexture(f1_p2_textA);
    f1_p2_sprtA.setColor(*(cube->p2->positions["arriba"]));
    f1_p2_sprtA.setPosition(sf::Vector2f(108.f,440.f));
    if(!f1_p3_textA.loadFromFile("img/blanco/BLANCO3A.png")){
        return 1;
    };
    f1_p3_sprtA.setTexture(f1_p3_textA);
    f1_p3_sprtA.setColor(*(cube->p3->positions["arriba"]));
    f1_p3_sprtA.setPosition(sf::Vector2f(160.f,406.f));

    if(!f1_p4_textA.loadFromFile("img/blanco/BLANCO4A.png")){
        return 1;
    };
    f1_p4_sprtA.setTexture(f1_p4_textA);
    f1_p4_sprtA.setColor(*(cube->p4->positions["arriba"]));
    f1_p4_sprtA.setPosition(sf::Vector2f(74.f,415.f));
    if(!f1_p5_textA.loadFromFile("img/blanco/BLANCO5A.png")){
        return 1;
    };
    f1_p5_sprtA.setTexture(f1_p5_textA);
    f1_p5_sprtA.setColor(*(cube->p5->positions["arriba"]));
    f1_p5_sprtA.setPosition(sf::Vector2f(116.f,393.f));
    if(!f1_p6_textA.loadFromFile("img/blanco/BLANCO6A.png")){
        return 1;
    };
    f1_p6_sprtA.setTexture(f1_p6_textA);
    f1_p6_sprtA.setColor(*(cube->p6->positions["arriba"]));
    f1_p6_sprtA.setPosition(sf::Vector2f(162.f,350.f));
    if(!f1_p7_textA.loadFromFile("img/blanco/BLANCO7A.png")){
        return 1;
    };
    f1_p7_sprtA.setTexture(f1_p7_textA);
    f1_p7_sprtA.setColor(*(cube->p7->positions["arriba"]));
    f1_p7_sprtA.setPosition(sf::Vector2f(82.f,372.f));
    if(!f1_p8_textA.loadFromFile("img/blanco/BLANCO8A.png")){
        return 1;
    };
    f1_p8_sprtA.setTexture(f1_p8_textA);
    f1_p8_sprtA.setColor(*(cube->p8->positions["arriba"]));
    f1_p8_sprtA.setPosition(sf::Vector2f(120.f,340.f));
    if(!f1_p9_textA.loadFromFile("img/blanco/BLANCO9A.png")){
        return 1;
    };
    f1_p9_sprtA.setTexture(f1_p9_textA);
    f1_p9_sprtA.setColor(*(cube->p9->positions["arriba"]));
    f1_p9_sprtA.setPosition(sf::Vector2f(163.f,302.f));
    if(!f1_p1_textB.loadFromFile("img/blanco/BLANCO1B.png")){
        return 1;
    };
    f1_p1_sprtB.setTexture(f1_p1_textB);
    f1_p1_sprtB.setColor(*(cube->p3->positions["derecha"]));
    f1_p1_sprtB.setPosition(sf::Vector2f(220.f,407.f));
    if(!f1_p2_textB.loadFromFile("img/blanco/BLANCO2B.png")){
        return 1;
    };
    f1_p2_sprtB.setTexture(f1_p2_textB);
    f1_p2_sprtB.setColor(*(cube->p12->positions["derecha"]));
    f1_p2_sprtB.setPosition(sf::Vector2f(270.f,446.f));
    if(!f1_p3_textB.loadFromFile("img/blanco/BLANCO3B.png")){
        return 1;
    };
    f1_p3_sprtB.setTexture(f1_p3_textB);
    f1_p3_sprtB.setColor(*(cube->p20->positions["derecha"]));
    f1_p3_sprtB.setPosition(sf::Vector2f(310.f,477.f));
    if(!f1_p4_textB.loadFromFile("img/blanco/BLANCO4B.png")){
        return 1;
    };
    f1_p4_sprtB.setTexture(f1_p4_textB);
    f1_p4_sprtB.setColor(*(cube->p6->positions["derecha"]));
    f1_p4_sprtB.setPosition(sf::Vector2f(216.f,351.f));
    if(!f1_p5_textB.loadFromFile("img/blanco/BLANCO5B.png")){
        return 1;
    };
    f1_p5_sprtB.setTexture(f1_p5_textB);
    f1_p5_sprtB.setColor(*(cube->p13->positions["derecha"]));
    f1_p5_sprtB.setPosition(sf::Vector2f(266.f,403.f));
    if(!f1_p6_textB.loadFromFile("img/blanco/BLANCO6B.png")){
        return 1;
    };
    f1_p6_sprtB.setTexture(f1_p6_textB);
    f1_p6_sprtB.setColor(*(cube->p14->positions["derecha"]));
    f1_p6_sprtB.setPosition(sf::Vector2f(305.f,425.f));
    if(!f1_p7_textB.loadFromFile("img/blanco/BLANCO7B.png")){
        return 1;
    };
    f1_p7_sprtB.setTexture(f1_p7_textB);
    f1_p7_sprtB.setColor(*(cube->p9->positions["derecha"]));
    f1_p7_sprtB.setPosition(sf::Vector2f(212.f,302.f));
    if(!f1_p8_textB.loadFromFile("img/blanco/BLANCO8B.png")){
        return 1;
    };
    f1_p8_sprtB.setTexture(f1_p8_textB);
    f1_p8_sprtB.setColor(*(cube->p14->positions["derecha"]));
    f1_p8_sprtB.setPosition(sf::Vector2f(258.f,343.f));
    if(!f1_p9_textB.loadFromFile("img/blanco/BLANCO9B.png")){
        return 1;
    };
    f1_p9_sprtB.setTexture(f1_p9_textB);
    f1_p9_sprtB.setColor(*(cube->p26->positions["derecha"]));
    f1_p9_sprtB.setPosition(sf::Vector2f(298.f,378.f));
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    drawables["f1_p1_sprtC"] = &f1_p1_sprtC;
    drawables["f1_p2_sprtC"] = &f1_p2_sprtC;
    drawables["f1_p3_sprtC"] = &f1_p3_sprtC;
    drawables["f1_p4_sprtC"] = &f1_p4_sprtC;
    drawables["f1_p5_sprtC"] = &f1_p5_sprtC;
    drawables["f1_p6_sprtC"] = &f1_p6_sprtC;
    drawables["f1_p7_sprtC"] = &f1_p7_sprtC;
    drawables["f1_p8_sprtC"] = &f1_p8_sprtC;
    drawables["f1_p9_sprtC"] = &f1_p9_sprtC;
    drawables["f1_p1_sprtA"] = &f1_p1_sprtA;
    drawables["f1_p2_sprtA"] = &f1_p2_sprtA;
    drawables["f1_p3_sprtA"] = &f1_p3_sprtA;
    drawables["f1_p4_sprtA"] = &f1_p4_sprtA;
    drawables["f1_p5_sprtA"] = &f1_p5_sprtA;
    drawables["f1_p6_sprtA"] = &f1_p6_sprtA;
    drawables["f1_p7_sprtA"] = &f1_p7_sprtA;
    drawables["f1_p8_sprtA"] = &f1_p8_sprtA;
    drawables["f1_p9_sprtA"] = &f1_p9_sprtA;
    drawables["f1_p1_sprtB"] = &f1_p1_sprtB;
    drawables["f1_p2_sprtB"] = &f1_p2_sprtB;
    drawables["f1_p3_sprtB"] = &f1_p3_sprtB;
    drawables["f1_p4_sprtB"] = &f1_p4_sprtB;
    drawables["f1_p5_sprtB"] = &f1_p5_sprtB;
    drawables["f1_p6_sprtB"] = &f1_p6_sprtB;
    drawables["f1_p7_sprtB"] = &f1_p7_sprtB;
    drawables["f1_p8_sprtB"] = &f1_p8_sprtB;
    drawables["f1_p9_sprtB"] = &f1_p9_sprtB;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if(!f1_p1_textC.loadFromFile("img/blanco/BLANCO1C.png")){
        return 1;
    };
    f1_p1_sprtC2.setTexture(f1_p1_textC);
    f1_p1_sprtC2.setColor(*(cube->p1->positions["izquierda"]));
    f1_p1_sprtC2.setPosition(sf::Vector2f(570.f,570.f));
    if(!f1_p2_textC.loadFromFile("img/blanco/BLANCO2C.png")){
        return 1;
    };
    f1_p2_sprtC2.setTexture(f1_p2_textC);
    f1_p2_sprtC2.setColor(*(cube->p4->positions["izquierda"]));
    f1_p2_sprtC2.setPosition(sf::Vector2f(615.f,557.f));
    if(!f1_p3_textC.loadFromFile("img/blanco/BLANCO3C.png")){
        return 1;
    };
    f1_p3_sprtC2.setTexture(f1_p3_textC);
    f1_p3_sprtC2.setColor(*(cube->p7->positions["izquierda"]));
    f1_p3_sprtC2.setPosition(sf::Vector2f(666.f,539.f));
    if(!f1_p4_textC.loadFromFile("img/blanco/BLANCO4C.png")){
        return 1;
    };
    f1_p4_sprtC2.setTexture(f1_p4_textC);
    f1_p4_sprtC2.setColor(*(cube->p10->positions["izquierda"]));
    f1_p4_sprtC2.setPosition(sf::Vector2f(525.f,555.f));
    if(!f1_p5_textC.loadFromFile("img/blanco/BLANCO5C.png")){
        return 1;
    };
    f1_p5_sprtC2.setTexture(f1_p5_textC);
    f1_p5_sprtC2.setColor(*(cube->p17->positions["izquierda"]));
    f1_p5_sprtC2.setPosition(sf::Vector2f(580.f,537.f));
    if(!f1_p6_textC.loadFromFile("img/blanco/BLANCO6C.png")){
        return 1;
    };
    f1_p6_sprtC2.setTexture(f1_p6_textC);
    f1_p6_sprtC2.setColor(*(cube->p16->positions["izquierda"]));
    f1_p6_sprtC2.setPosition(sf::Vector2f(621.f,508.f));
    if(!f1_p7_textC.loadFromFile("img/blanco/BLANCO7C.png")){
        return 1;
    };
    f1_p7_sprtC2.setTexture(f1_p7_textC);
    f1_p7_sprtC2.setColor(*(cube->p18->positions["izquierda"]));
    f1_p7_sprtC2.setPosition(sf::Vector2f(470.f,537.f));
    if(!f1_p8_textC.loadFromFile("img/blanco/BLANCO8C.png")){
        return 1;
    };
    f1_p8_sprtC2.setTexture(f1_p8_textC);
    f1_p8_sprtC2.setColor(*(cube->p21->positions["izquierda"]));
    f1_p8_sprtC2.setPosition(sf::Vector2f(517.f,508.f));
    if(!f1_p9_textC.loadFromFile("img/blanco/BLANCO9C.png")){
        return 1;
    };
    f1_p9_sprtC2.setTexture(f1_p9_textC);
    f1_p9_sprtC2.setColor(*(cube->p24->positions["izquierda"]));
    f1_p9_sprtC2.setPosition(sf::Vector2f(570.f,473.f));
    if(!f1_p1_textA.loadFromFile("img/blanco/BLANCO1A.png")){
        return 1;
    };
    f1_p1_sprtA2.setTexture(f1_p1_textA);
    f1_p1_sprtA2.setColor(*(cube->p18->positions["abajo"]));
    f1_p1_sprtA2.setPosition(sf::Vector2f(465.f,470.f));

    if(!f1_p2_textA.loadFromFile("img/blanco/BLANCO2A.png")){
        return 1;
    };
    f1_p2_sprtA2.setTexture(f1_p2_textA);
    f1_p2_sprtA2.setColor(*(cube->p21->positions["abajo"]));
    f1_p2_sprtA2.setPosition(sf::Vector2f(508.f,440.f));
    if(!f1_p3_textA.loadFromFile("img/blanco/BLANCO3A.png")){
        return 1;
    };
    f1_p3_sprtA2.setTexture(f1_p3_textA);
    f1_p3_sprtA2.setColor(*(cube->p24->positions["abajo"]));
    f1_p3_sprtA2.setPosition(sf::Vector2f(560.f,406.f));

    if(!f1_p4_textA.loadFromFile("img/blanco/BLANCO4A.png")){
        return 1;
    };
    f1_p4_sprtA2.setTexture(f1_p4_textA);
    f1_p4_sprtA2.setColor(*(cube->p19->positions["abajo"]));
    f1_p4_sprtA2.setPosition(sf::Vector2f(474.f,415.f));
    if(!f1_p5_textA.loadFromFile("img/blanco/BLANCO5A.png")){
        return 1;
    };
    f1_p5_sprtA2.setTexture(f1_p5_textA);
    f1_p5_sprtA2.setColor(*(cube->p22->positions["abajo"]));
    f1_p5_sprtA2.setPosition(sf::Vector2f(516.f,393.f));
    if(!f1_p6_textA.loadFromFile("img/blanco/BLANCO6A.png")){
        return 1;
    };
    f1_p6_sprtA2.setTexture(f1_p6_textA);
    f1_p6_sprtA2.setColor(*(cube->p25->positions["abajo"]));
    f1_p6_sprtA2.setPosition(sf::Vector2f(562.f,350.f));
    if(!f1_p7_textA.loadFromFile("img/blanco/BLANCO7A.png")){
        return 1;
    };
    f1_p7_sprtA2.setTexture(f1_p7_textA);
    f1_p7_sprtA2.setColor(*(cube->p20->positions["abajo"]));
    f1_p7_sprtA2.setPosition(sf::Vector2f(482.f,372.f));
    if(!f1_p8_textA.loadFromFile("img/blanco/BLANCO8A.png")){
        return 1;
    };
    f1_p8_sprtA2.setTexture(f1_p8_textA);
    f1_p8_sprtA2.setColor(*(cube->p23->positions["abajo"]));
    f1_p8_sprtA2.setPosition(sf::Vector2f(520.f,340.f));
    if(!f1_p9_textA.loadFromFile("img/blanco/BLANCO9A.png")){
        return 1;
    };
    f1_p9_sprtA2.setTexture(f1_p9_textA);
    f1_p9_sprtA2.setColor(*(cube->p26->positions["abajo"]));
    f1_p9_sprtA2.setPosition(sf::Vector2f(563.f,302.f));
    if(!f1_p1_textB.loadFromFile("img/blanco/BLANCO1B.png")){
        return 1;
    };
    f1_p1_sprtB2.setTexture(f1_p1_textB);
    f1_p1_sprtB2.setColor(*(cube->p24->positions["atras"]));
    f1_p1_sprtB2.setPosition(sf::Vector2f(620.f,407.f));
    if(!f1_p2_textB.loadFromFile("img/blanco/BLANCO2B.png")){
        return 1;
    };
    f1_p2_sprtB2.setTexture(f1_p2_textB);
    f1_p2_sprtB2.setColor(*(cube->p16->positions["atras"]));
    f1_p2_sprtB2.setPosition(sf::Vector2f(670.f,446.f));
    if(!f1_p3_textB.loadFromFile("img/blanco/BLANCO3B.png")){
        return 1;
    };
    f1_p3_sprtB2.setTexture(f1_p3_textB);
    f1_p3_sprtB2.setColor(*(cube->p7->positions["atras"]));
    f1_p3_sprtB2.setPosition(sf::Vector2f(710.f,477.f));
    if(!f1_p4_textB.loadFromFile("img/blanco/BLANCO4B.png")){
        return 1;
    };
    f1_p4_sprtB2.setTexture(f1_p4_textB);
    f1_p4_sprtB2.setColor(*(cube->p25->positions["atras"]));
    f1_p4_sprtB2.setPosition(sf::Vector2f(616.f,351.f));
    if(!f1_p5_textB.loadFromFile("img/blanco/BLANCO5B.png")){
        return 1;
    };
    f1_p5_sprtB2.setTexture(f1_p5_textB);
    f1_p5_sprtB2.setColor(*(cube->p15->positions["atras"]));
    f1_p5_sprtB2.setPosition(sf::Vector2f(666.f,403.f));
    if(!f1_p6_textB.loadFromFile("img/blanco/BLANCO6B.png")){
        return 1;
    };
    f1_p6_sprtB2.setTexture(f1_p6_textB);
    f1_p6_sprtB2.setColor(*(cube->p8->positions["atras"]));
    f1_p6_sprtB2.setPosition(sf::Vector2f(705.f,425.f));
    if(!f1_p7_textB.loadFromFile("img/blanco/BLANCO7B.png")){
        return 1;
    };
    f1_p7_sprtB2.setTexture(f1_p7_textB);
    f1_p7_sprtB2.setColor(*(cube->p26->positions["atras"]));
    f1_p7_sprtB2.setPosition(sf::Vector2f(612.f,302.f));
    if(!f1_p8_textB.loadFromFile("img/blanco/BLANCO8B.png")){
        return 1;
    };
    f1_p8_sprtB2.setTexture(f1_p8_textB);
    f1_p8_sprtB2.setColor(*(cube->p14->positions["atras"]));
    f1_p8_sprtB2.setPosition(sf::Vector2f(658.f,343.f));
    if(!f1_p9_textB.loadFromFile("img/blanco/BLANCO9B.png")){
        return 1;
    };
    f1_p9_sprtB2.setTexture(f1_p9_textB);
    f1_p9_sprtB2.setColor(*(cube->p9->positions["atras"]));
    f1_p9_sprtB2.setPosition(sf::Vector2f(698.f,378.f));
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    drawables["f1_p1_sprtC2"] = &f1_p1_sprtC2;
    drawables["f1_p2_sprtC2"] = &f1_p2_sprtC2;
    drawables["f1_p3_sprtC2"] = &f1_p3_sprtC2;
    drawables["f1_p4_sprtC2"] = &f1_p4_sprtC2;
    drawables["f1_p5_sprtC2"] = &f1_p5_sprtC2;
    drawables["f1_p6_sprtC2"] = &f1_p6_sprtC2;
    drawables["f1_p7_sprtC2"] = &f1_p7_sprtC2;
    drawables["f1_p8_sprtC2"] = &f1_p8_sprtC2;
    drawables["f1_p9_sprtC2"] = &f1_p9_sprtC2;
    drawables["f1_p1_sprtA2"] = &f1_p1_sprtA2;
    drawables["f1_p2_sprtA2"] = &f1_p2_sprtA2;
    drawables["f1_p3_sprtA2"] = &f1_p3_sprtA2;
    drawables["f1_p4_sprtA2"] = &f1_p4_sprtA2;
    drawables["f1_p5_sprtA2"] = &f1_p5_sprtA2;
    drawables["f1_p6_sprtA2"] = &f1_p6_sprtA2;
    drawables["f1_p7_sprtA2"] = &f1_p7_sprtA2;
    drawables["f1_p8_sprtA2"] = &f1_p8_sprtA2;
    drawables["f1_p9_sprtA2"] = &f1_p9_sprtA2;
    drawables["f1_p1_sprtB2"] = &f1_p1_sprtB2;
    drawables["f1_p2_sprtB2"] = &f1_p2_sprtB2;
    drawables["f1_p3_sprtB2"] = &f1_p3_sprtB2;
    drawables["f1_p4_sprtB2"] = &f1_p4_sprtB2;
    drawables["f1_p5_sprtB2"] = &f1_p5_sprtB2;
    drawables["f1_p6_sprtB2"] = &f1_p6_sprtB2;
    drawables["f1_p7_sprtB2"] = &f1_p7_sprtB2;
    drawables["f1_p8_sprtB2"] = &f1_p8_sprtB2;
    drawables["f1_p9_sprtB2"] = &f1_p9_sprtB2;



    if(!text_frontal.loadFromFile("img/blanco/BLANCOFRONTAL.png")){
        return 1;
    };
    sprite_frontal1.setTexture(text_frontal);
    sprite_frontal1.setPosition(sf::Vector2f(880.f,360.f));
    sprite_frontal1.setColor(*(cube->p1->positions["frente"]));
    sprite_frontal2.setTexture(text_frontal);
    sprite_frontal2.setPosition(sf::Vector2f(950.f,360.f));
    sprite_frontal2.setColor(*(cube->p2->positions["frente"]));
    sprite_frontal3.setTexture(text_frontal);
    sprite_frontal3.setPosition(sf::Vector2f(1020.f,360.f));
    sprite_frontal3.setColor(*(cube->p3->positions["frente"]));
    sprite_frontal4.setTexture(text_frontal);
    sprite_frontal4.setPosition(sf::Vector2f(880.f,430.f));
    sprite_frontal4.setColor(*(cube->p10->positions["frente"]));
    sprite_frontal5.setTexture(text_frontal);
    sprite_frontal5.setPosition(sf::Vector2f(950.f,430.f));
    sprite_frontal5.setColor(*(cube->p11->positions["frente"]));
    sprite_frontal6.setTexture(text_frontal);
    sprite_frontal6.setPosition(sf::Vector2f(1020.f,430.f));
    sprite_frontal6.setColor(*(cube->p12->positions["frente"]));
    sprite_frontal7.setTexture(text_frontal);
    sprite_frontal7.setPosition(sf::Vector2f(880.f,500.f));
    sprite_frontal7.setColor(*(cube->p18->positions["frente"]));
    sprite_frontal8.setTexture(text_frontal);
    sprite_frontal8.setPosition(sf::Vector2f(950.f,500.f));
    sprite_frontal8.setColor(*(cube->p19->positions["frente"]));
    sprite_frontal9.setTexture(text_frontal);
    sprite_frontal9.setPosition(sf::Vector2f(1020.f,500.f));
    sprite_frontal9.setColor(*(cube->p20->positions["frente"]));


    drawables["sprite_frontal1"] = &sprite_frontal1;
    drawables["sprite_frontal2"] = &sprite_frontal2;
    drawables["sprite_frontal3"] = &sprite_frontal3;
    drawables["sprite_frontal4"] = &sprite_frontal4;
    drawables["sprite_frontal5"] = &sprite_frontal5;
    drawables["sprite_frontal6"] = &sprite_frontal6;
    drawables["sprite_frontal7"] = &sprite_frontal7;
    drawables["sprite_frontal8"] = &sprite_frontal8;
    drawables["sprite_frontal9"] = &sprite_frontal9;
    drawables["miTexto"]=&miTexto;

    return 0;
}

void Game::eventos()
{
    while(window_.pollEvent(miEvento))
    {
        if(miEvento.type==sf::Event::Closed)
            isPlay=false;
    }

}

void Game::update()
{
    HerenciaPadre* playing=NULL;

    string tipo= "WithMovimentsEasy";
    if(tipo=="libre")
    {
        playing = new Libre(drawables,cube,window_);
    }else if(tipo=="WithTimeEasy")
    {
        playing= new WithTimeEasy(drawables);
    }
    else if(tipo=="WithTimeNormal")
    {
        playing= new WithTimeNormal(drawables);
    }
    else if(tipo=="WithTimeHard")
    {
        playing= new WithTimeHard(drawables);
    }
    else if(tipo=="WithMovimentsEasy")
    {
        playing= new WithMovimentsEasy(drawables,cube,window_);
    }
    else if(tipo=="WithMovimentsNormal")
    {
        playing= new WithMovimentsNormal(drawables);
    }
    else if(tipo=="WithMovimentsHard")
    {
        playing= new WithMovimentsHard(drawables);
    }else
    {
        return;
    }
    playing->loop();
}
void Game::render()
{
    window_.clear(sf::Color::Black);
    window_.draw(drawables);
    window_.display();
}

void Game::cleared()
{
    window_.close();
}

void Game::run()
{
    inicializar();
    while(isPlay)
    {
        eventos();
        update();
        render();
    }
    cleared();
}
