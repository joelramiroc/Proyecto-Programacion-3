#ifndef WINDOW_H
#define WINDOW_H
#include<SFML/Graphics.hpp>
#include<vector>
#include<iostream>
#include <fstream>
#include"InfoPlayer.h"
#include <string.h>

using namespace std;

class Window
{
private:
    sf::RenderWindow &window_;

public:
    InfoPlayer* infoPlayer;
    explicit Window(sf::RenderWindow &window);

    bool isOpen();

    void close();

    void cleared();

    void drawSprites(sf::Sprite* print);

    void display();

    void draw(map<string,sf::Drawable*>& drawables);

    bool pollEvent(sf::Event &event);

    void clear(const sf::Color &color);

    int TAMANO_REGISTRO;

    void agregar(InfoPlayer* info);

    InfoPlayer* buscar(string nombre);


};

#endif // WINDOW_H
