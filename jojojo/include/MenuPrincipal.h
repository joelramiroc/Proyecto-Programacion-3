#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H
#include<iostream>
#include<SFML/Graphics.hpp>
#include"../Game.h"
#include"Instructions.h"
#include <SFML/Audio.hpp>

class MenuPrincipal
{
    public:
        sf::SoundBuffer sonidoClick;
        sf::Sound reproducirClick;
    	sf::Music musica;
        MenuPrincipal(Window& window);
        bool isPlay=true;
        bool goTo=false;
        int opcion=1;
        bool aumentar=false,disminuir=true,der=false,izq=false;
        string seleccion;
        map<string,sf::Drawable*> drawables;
        map<string,sf::Drawable*> fondodo;
        map<string,sf::Drawable*> loads;
        vector<sf::Sprite*> gifLoad;
        vector<sf::Texture*> imgLoad;
        Window window_;
        sf::Event miEvento;
        sf::Sprite sprite,mostrarBack,mostrarBack2,fondo;
        sf::Texture texture,backround,backround2,mostrarFondo;
        sf::Text text1,text2,text3,text4,text5,text6,text7,text8,text9,text10;
        sf::Font font1,font2,font3,font4,font5,font6,font7,font8,font9,font10;

        void load();
        void inicializar();
        void run();
        void whites();
        void eventos();
        void update();
        void render();
        void cleared();
        void loop();
        void moveUp();
        void moveDown();
};

#endif // MENUPRINCIPAL_H
