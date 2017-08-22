#include<SFML/Graphics.hpp>
#include "Game.h"
#include <memory>
#include<iostream>
using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 650), "Rubik's Cube!");
    //tipo vector... para eliminar automaticamente el espacio de memoria reservado por punteros usando el include memory
    shared_ptr<Game> miJuego(new Game(&window));

    miJuego->run();
    return 0;
}
