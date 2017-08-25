#include "Libre.h"

Libre::Libre(map<string,sf::Drawable*>& drawables)
{
// this->drawables=drawables;
// ((sf::Sprite*)(*drawables)[4])->setColor(sf::Color::Blue);
//this->spriteCara[][]=;

    this->score=0;
    this->archivo="CompetenciaLibre";
    this->typeGame="Libre";
    ofstream nombreArchivo(archivo);
}

void Libre::comparations()
{
 if(miEvento.type==sf::Event::KeyReleased && miEvento.key.code==sf::Keyboard::L)
            l=true;
};

void Libre::guardar()
{

};

void Libre::info()
{

};

void Libre::loop()
{
    while(repetir)
    {
        events();
        update();
        repetir=false;
    }
};

void Libre::update()
{
    if(l)
    {
        cout<<"presionaste la  L"<<endl;
        l=false;

    }
};

void Libre::events()
{

};
