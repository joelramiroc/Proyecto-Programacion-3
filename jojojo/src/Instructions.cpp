#include "Instructions.h"

Instructions::Instructions(Window& window): window_(window)
{
    if(!instrucciones.loadFromFile("img/instrucciones.png")){
            cout<<"NO CARGO:"<<endl;
    };
    mostrarInstrucciones.setTexture(instrucciones);
    mostrarInstrucciones.setPosition(sf::Vector2f(0.f,0.f));
    drawables["mostrarInstrucciones"] = &mostrarInstrucciones;

    if(!mostrarMenu.loadFromFile("fonts/fast99.ttf")){
    }
    menu.setFont(mostrarMenu);
    menu.setCharacterSize(20);
    menu.setString("Presione Q para regresar");
    menu.setPosition(sf::Vector2f(20.f,610.f));
    texttered["menu"] = &menu;


    window_.clear(sf::Color::Black);
    window_.draw(drawables);
    window_.draw(texttered);
    window_.display();
}

void Instructions::events()
{

    while(window_.pollEvent(miEvento))
    {
        if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::Q)
        isPlay=false;
    }
}


void Instructions::loop()
{
    while(isPlay)
    {
        events();
    }
};
