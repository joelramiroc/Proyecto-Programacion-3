#include "HerenciaPadre.h"


HerenciaPadre::HerenciaPadre()
{
    this->repetir=true;
    this->l=false;
    this->ll=false;
    this->r=false;
    this->rr=false;
    this->m=false;
    this->mm=false;
    this->d=false;
    this->dd=false;
    this->t=false;
    this->tt=false;
    this->u=false;
    this->uu=false;
    this->b=false;
    this->bb=false;
    this->s=false;
    this->ss=false;
    this->f=false;
    this->ff=false;
    this->typeGame="";
    this->nivelDificultad="";
    this->nombreJugador="";
    this->ganados=0;
    this->perdidos=0;
    this->score=0;
    this->blanco=1;
    this->amarillo=2;
    this->verde=3;
    this->azul=4;
    this->rojo=5;
    this->naranja=6;
    this->noExiste=0;
    for(int i=0;i<6;i++)
    {
        string n= to_string(i+1);
        string total="img/winded/"+n+".png";
        imgWin.push_back(new sf::Texture);
        gifWin.push_back(new sf::Sprite);
         if(!(imgWin[i])->loadFromFile(total)){
                };
        (gifWin[i])->setTexture(*(imgWin[i]));
        (gifWin[i])->setPosition(sf::Vector2f(375.f,200.f));
    }
}
