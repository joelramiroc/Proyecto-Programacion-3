#include "Libre.h"

Libre::Libre(map<string,sf::Drawable*>& drawables, Cube* &cube,Window& window_):window_(window_)
{
    this->cube=cube;
    this->temp=&drawables;
    this->score=0;
    this->archivo="CompetenciaLibre";
    this->typeGame="Libre";
    ofstream nombreArchivo(archivo);
}

void Libre::comparations()
{

};

void Libre::guardar()
{

};

void Libre::info()
{

};

void Libre::events()
{
    while(window_.pollEvent(miEvento))
    {
        if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::L)
            l=true;
    }
};


void Libre::act()
{
    map<string,sf::Drawable*> map_temp = *temp;
    sf::Drawable* drawable_temp = map_temp["f1_p1_sprtC"];
    sf::Sprite* sprite_temp = (sf::Sprite*)drawable_temp;
    (*sprite_temp).setColor(*(cube->p15->positions["atras"]));
}

void Libre::update()
{
    if(l)
    {
        Piece* p;
        p=cube->p1;
        cube->movementArriba(*p);
        p->MovementArriba();
        cout<<"funciono?"<<endl;
        l=false;
        act();
    }
    window_.cleared();
    window_.draw(*temp);
    window_.display();

};

void Libre::cleared()
{
    window_.close();
}

void Libre::loop()
{
    while(repetir)
    {
        events();
        update();
    }
        cleared();
};

