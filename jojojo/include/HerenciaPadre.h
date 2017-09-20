#ifndef HERENCIAPADRE_H
#define HERENCIAPADRE_H
#include <iostream>
#include <fstream>
#include<SFML/Graphics.hpp>
#include<vector>
#include<stdlib.h>
#include<time.h>
#include"Window.h"
#include"InfoPlayer.h"
#include <SFML/Audio.hpp>

using namespace std;

class HerenciaPadre
{
public:
        int totalDisp=0;
        sf::Sprite backck;
        sf::Texture backShow;
    	sf::Music musica;
    	sf::SoundBuffer sonidoMovimiento,sonidoFin,sonidoWin,sonidoLost;
        sf::Sound reproducirMovv,reproducirFin,reproducirWin,reproducirLost;
        InfoPlayer* infoPLayer;
        sf::Event miEvento;
        int azul,verde,amarillo,blanco,rojo,naranja,noExiste;
        int ganados,perdidos,Dispon,contara;
        bool l,ll,r,rr,d,dd,u,uu,s,ss,m,mm,b,bb,f,ff,t,tt,repetir,endGame;
        string typeGame,nivelDificultad,nombreJugador;
        virtual void comparations()=0;
        virtual void guardar(string nombre, int ganados, int perdidos)=0;
        virtual void playAgain()=0;
        virtual void info()=0;
        virtual void loop()=0;
        virtual void events()=0;
        virtual void update()=0;
        virtual void win()=0;
        virtual void lost()=0;
        virtual void act()=0;
        virtual void scramble()=0;
        vector<sf::Sprite*> sprites;
        HerenciaPadre();
        sf::Font tipo,nivel,restante,salir,nombreP,ganadosP,perdidosP,playA;
        sf::Text mostrarTipo,mostrarNivel,mostrarRestante,mostrarSalir,mostrarGa,MostrarPe,mostrarNom,mostrarPlayAgain;
        vector<sf::Sprite*> gifWin;
        vector<sf::Texture*> imgWin;
        vector<sf::Sprite*> gifLost;
        vector<sf::Texture*> imgLost;


        string cantidadRestante;
};

#endif // HERENCIAPADRE_H
