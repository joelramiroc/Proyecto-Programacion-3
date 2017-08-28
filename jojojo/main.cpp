#include<SFML/Graphics.hpp>
#include "Game.h"
#include "Window.h"
#include <memory>
#include<iostream>
using namespace std;

int main()
{
    cout<<"A"<<endl;
    cout<<"B"<<endl;
    cout<<"C"<<endl;
    const auto &title = "Rubik's Cube!";
    sf::VideoMode video_mode(1200, 650);
    sf::RenderWindow renderWindow(video_mode, title);
    Window window(renderWindow);
    Game game(window);
    game.run();





    return 0;
}
