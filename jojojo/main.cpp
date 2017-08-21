#include<SFML/Graphics.hpp>
#include "Game.h"
#include <memory>
#include<iostream>
using namespace std;

int main()
{
    //tipo vector... para eliminar automaticamente el espacio de memoria reservado por punteros usando el include memory
    shared_ptr<Game> miJuego(new Game());

    miJuego->run();
    return 0;
}
