#include "InfoMain.h"


InfoMain::InfoMain(float width, float height)
{
    if(!font.loadFromFile("arial.ttf"))
    {

    }

    menu[0].setFont(font);
    menu[0].setColor(sf::Color::Green);
    menu[0].setString("INICIAR JUEGO");
    menu[0].setPosition(sf::Vector2(width / 2, height / (MAX_NUMBER_OF_TIMES + 1) * 1));

    menu[1].setFont(font);
    menu[1].setColor(sf::Color::Blue);
    menu[1].setString("INSTRUCCION");
    menu[1].setPosition(sf::Vector2(width / 2, height / (MAX_NUMBER_OF_TIMES + 1) * 2));

    menu[2].setFont(font);
    menu[2].setColor(sf::Color::Blue);
    menu[2].setString("SALIR");
    menu[2].setPosition(sf::Vector2(width / 2, height / (MAX_NUMBER_OF_TIMES + 1) * 3));

    selectedItemIndex = 0;
}

InfoMain::~InfoMain()
{
    //dtor
}

void InfoMain::draw(sf::RenderWindow &window)
{
    for(int i=0; i<MAX_NUMBER_OF_TIMES; i++)
    {
        window.draw(menu[i]);
    }
}


void InfoMain::moveUp()
{
    if(selectedItemIndex - 1 >= 0)
    {
        menu[selectedItemIndex].setColor(sf::Color::Blue);
        selectedItemIndex--;
        menu[selectedItemIndex].setColor(sf::Color::Green);
    }
}

void InfoMain::moveDown()
{
    if(selectedItemIndex + 1 < MAX_NUMBER_OF_TIMES)
    {
        menu[selectedItemIndex].setColor(sf::Color::Blue);
        selectedItemIndex++;
        menu[selectedItemIndex].setColor(sf::Color::Green);
    }
}
