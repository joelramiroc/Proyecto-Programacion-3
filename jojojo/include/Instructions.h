#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H
#include<SFML/Graphics.hpp>
#include"Window.h"


class Instructions
{
    public:
        map<string,sf::Drawable*> loads;
        vector<sf::Sprite*> gifLoad;
        vector<sf::Texture*> imgLoad;

        map<string,sf::Drawable*> drawables;
        map<string,sf::Drawable*> texttered;
        Window window_;
        sf::Event miEvento;
        sf::Sprite mostrarInstrucciones;
        sf::Texture instrucciones;
        sf::Text menu;
        sf::Font mostrarMenu;

        void load();
        void loop();
        void events();
        bool isPlay=true;
        Instructions(Window& window);
};

#endif // INSTRUCTIONS_H
