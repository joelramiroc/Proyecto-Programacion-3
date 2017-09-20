#include<SFML/Graphics.hpp>
#include "Game.h"
#include "Window.h"
#include"MenuPrincipal.h"
#include <memory>
#include<iostream>
using namespace std;

int main()
{
    const auto &title = "Rubik's Cube!";
    sf::VideoMode video_mode(1200, 650);
    sf::RenderWindow renderWindow(video_mode, title);

    sf::Image icon;
    if(!icon.loadFromFile("img/icono.png"))
    {
    }
    renderWindow.setIcon(icon.getSize().x,icon.getSize().y,icon.getPixelsPtr());
    Window window(renderWindow);
    MenuPrincipal menuPrincipal(window);
    menuPrincipal.loop();
    return 0;
}
