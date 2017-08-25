#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include<SFML/Graphics.hpp>
#include"Window.h"
#include<vector>
#include"HerenciaPadre.h"
#include "HerenciaPadre.h"
#include "WithMoviments.h"
#include "WithMovimentsEasy.h"
#include "WithMovimentsNormal.h"
#include "WithMovimentsHard.h"
#include "Libre.h"
#include "WithTime.h"
#include "WithTimeEasy.h"
#include "WithTimeNormal.h"
#include "WithTimeHard.h"
#include "SpriteObjet.h"
#include "Cube.h"
#include<map>

class Game
{
private:
    Cube* cube=new Cube();
    Window window_;
    sf::Event miEvento;
    bool isPlay=true;
    bool presionar=false;
    bool liberar=false;
    bool clicLeft=false;
    int mouseX, mouseY;
    sf::Texture miTextura;
    sf::Sprite miSprite;
    sf::Font letra;
    sf::Text miTexto;
    bool UP{false}, DOWN{false}, LEFT{false}, RIGHT{false} ;
    map<string,sf::Drawable*> drawables;
    vector<sf::Sprite*> sprites;

    sf::Texture f1_p1_textA,f1_p2_textA,f1_p3_textA,f1_p4_textA,f1_p5_textA,f1_p6_textA,f1_p7_textA,f1_p8_textA,f1_p9_textA,
                f1_p1_textB,f1_p2_textB,f1_p3_textB,f1_p4_textB,f1_p5_textB,f1_p6_textB,f1_p7_textB,f1_p8_textB,f1_p9_textB,
                f1_p1_textC,f1_p2_textC,f1_p3_textC,f1_p4_textC,f1_p5_textC,f1_p6_textC,f1_p7_textC,f1_p8_textC,f1_p9_textC,
                text_frontal;

    sf::Sprite  f1_p1_sprtA,f1_p2_sprtA,f1_p3_sprtA,f1_p4_sprtA,f1_p5_sprtA,f1_p6_sprtA,f1_p7_sprtA,f1_p8_sprtA,f1_p9_sprtA,
                f1_p1_sprtB,f1_p2_sprtB,f1_p3_sprtB,f1_p4_sprtB,f1_p5_sprtB,f1_p6_sprtB,f1_p7_sprtB,f1_p8_sprtB,f1_p9_sprtB,
                f1_p1_sprtC,f1_p2_sprtC,f1_p3_sprtC,f1_p4_sprtC,f1_p5_sprtC,f1_p6_sprtC,f1_p7_sprtC,f1_p8_sprtC,f1_p9_sprtC,
                f1_p1_sprtA2,f1_p2_sprtA2,f1_p3_sprtA2,f1_p4_sprtA2,f1_p5_sprtA2,f1_p6_sprtA2,f1_p7_sprtA2,f1_p8_sprtA2,f1_p9_sprtA2,
                f1_p1_sprtB2,f1_p2_sprtB2,f1_p3_sprtB2,f1_p4_sprtB2,f1_p5_sprtB2,f1_p6_sprtB2,f1_p7_sprtB2,f1_p8_sprtB2,f1_p9_sprtB2,
                f1_p1_sprtC2,f1_p2_sprtC2,f1_p3_sprtC2,f1_p4_sprtC2,f1_p5_sprtC2,f1_p6_sprtC2,f1_p7_sprtC2,f1_p8_sprtC2,f1_p9_sprtC2,
                sprite_frontal1,sprite_frontal2,sprite_frontal3,sprite_frontal4,sprite_frontal5,sprite_frontal6,sprite_frontal7,sprite_frontal8,sprite_frontal9;



    int inicializar();
    void eventos();
    void update();
    void render();
    void cleared();

public:

    Game(Window& window);
    void run();
};



#endif // GAME_H_INCLUDED
