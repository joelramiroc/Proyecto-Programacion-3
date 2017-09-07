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
    this->Dispon=0;
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
        string wins="img/winded/"+n+".png";
        string losts="img/losted/"+n+".png";

        imgWin.push_back(new sf::Texture);
        gifWin.push_back(new sf::Sprite);
        imgLost.push_back(new sf::Texture);
        gifLost.push_back(new sf::Sprite);

         if(!(imgWin[i])->loadFromFile(wins)){
                };
        (gifWin[i])->setTexture(*(imgWin[i]));
        (gifWin[i])->setPosition(sf::Vector2f(375.f,200.f));

        if(i<5)
        {
         if(!(imgLost[i])->loadFromFile(losts)){
                };
        (gifLost[i])->setTexture(*(imgLost[i]));
        (gifLost[i])->setPosition(sf::Vector2f(375.f,200.f));
        }
    }

    if(!nivel.loadFromFile("fonts/fast99.ttf")){
            return;
    }
    mostrarNivel.setFont(nivel);
    mostrarNivel.setCharacterSize(25);
    mostrarNivel.setColor(sf::Color::White);
    mostrarNivel.setPosition(sf::Vector2f(1120.f,10.f));

    if(!tipo.loadFromFile("fonts/fast99.ttf")){
            return;
    }
    mostrarTipo.setFont(tipo);
    mostrarTipo.setCharacterSize(25);
    mostrarTipo.setColor(sf::Color::White);
    mostrarTipo.setPosition(sf::Vector2f(950.f,40.f));

    if(!restante.loadFromFile("fonts/fast99.ttf")){
            return;
    }

    mostrarRestante.setFont(tipo);
    mostrarRestante.setCharacterSize(25);
    mostrarRestante.setColor(sf::Color::White);
    mostrarRestante.setPosition(sf::Vector2f(950.f,70.f));



     if(!salir.loadFromFile("fonts/fast99.ttf")){
            return;
    }
    mostrarSalir.setFont(salir);
    mostrarSalir.setCharacterSize(15);
    mostrarSalir.setString("Presione Q para volver al menu");
    mostrarSalir.setColor(sf::Color::White);
    mostrarSalir.setPosition(sf::Vector2f(910.f,610.f));

    if(!playA.loadFromFile("fonts/fast99.ttf")){
            return;
    }
    mostrarPlayAgain.setFont(playA);
    mostrarPlayAgain.setCharacterSize(15);
    mostrarPlayAgain.setString("Shitf: Jugar de nuevo");
    mostrarPlayAgain.setColor(sf::Color::White);
    mostrarPlayAgain.setPosition(sf::Vector2f(10.f,610.f));

     if(!nombreP.loadFromFile("fonts/fast99.ttf")){
            return;
    }
    mostrarNom.setFont(nombreP);
    mostrarNom.setCharacterSize(15);
    mostrarNom.setString("Nombre:");
    mostrarNom.setColor(sf::Color::White);
    mostrarNom.setPosition(sf::Vector2f(950.f,120.f));

    if(!ganadosP.loadFromFile("fonts/fast99.ttf")){
            return;
    }
    mostrarGa.setFont(ganadosP);
    mostrarGa.setCharacterSize(15);
    mostrarGa.setString("Ganados:");
    mostrarGa.setColor(sf::Color::White);
    mostrarGa.setPosition(sf::Vector2f(950.f,140.f));

    if(!perdidosP.loadFromFile("fonts/fast99.ttf")){
            return;
    }
    MostrarPe.setFont(perdidosP);
    MostrarPe.setCharacterSize(15);
    MostrarPe.setString("Perdidos:");
    MostrarPe.setColor(sf::Color::White);
    MostrarPe.setPosition(sf::Vector2f(950.f,160.f));


}
