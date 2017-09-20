#include "WithTime.h"

WithTime::WithTime(map<string,sf::Drawable*>& drawables, Cube* &cube,Window& window_,string nombrePlayer,string tipeOfGame,string level):window_(window_)
{
        backroundP["backck"]=&backck;

    if(level=="Facil")
    {
        this->Dispon=360;
    }else if(level=="Normal")
    {
        this->Dispon=300;
    }else
    {
        this->Dispon=120;
    }
    totalDisp=Dispon;



    this->nombreJugador=nombrePlayer;
    this->cube=cube;
    this->temp=&drawables;
    this->contara=Dispon;
    mostrarNivel.setPosition(sf::Vector2f(950.f,10.f));
    mostrarNivel.setString(level);
    ((*temp)["nivel"])=&mostrarNivel;
    mostrarTotal.setString("Total: 0" + to_string(Dispon/60)+":0"+to_string(Dispon%60)+":00");
    ((*temp)["sdfsdf"])=&mostrarTotal;
    mostrarTipo.setString(tipeOfGame);
    ((*temp)["tipo"])=&mostrarTipo;
    mostrarRestante.setString(cantidadRestante);
    tiempoT();
    ((*temp)["restante"])=&mostrarRestante;
    ((*temp)["salir"])=&mostrarSalir;
    ((*temp)["playAgain"])=&mostrarPlayAgain;
    ((*temp)["nombreP"])=&mostrarNom;
    ((*temp)["ganadosP"])=&mostrarGa;
    ((*temp)["perdidosP"])=&MostrarPe;
    update();
    guardar(nombreJugador,0,0);
}


void WithTime::scramble()
{
    srand(time(NULL));
    int num=1+rand()%(7-1);
    int contara=21;
    while(contara!=0)
    {
        if(num==1)
        {
            r=true;
            update();
        }else if(num==2)
        {
            l=true;
            update();
        }else if(num==3)
        {
            u=true;
            update();

        }else if(num==4)
        {
            d=true;
            update();

        }else if(num==5)
        {
            f=true;
            update();

        }else if(num==6)
        {
            b=true;
            update();
        }
        contara--;
        num=1+rand()%(7-1);
    }
};

void WithTime::win()
{
    if(!endGame)
    {
        guardar(nombreJugador,1,0);
        sf::Clock clock;
        sf::Time elapsed1 = clock.getElapsedTime();
        musica.stop();
        reproducirWin.play();
        while(elapsed1.asSeconds()<2)
        {
            elapsed1 = clock.getElapsedTime();
             if(elapsed1.asMilliseconds()<250)
            {
                ((*temp)["win"])=(gifWin[0]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }else if(elapsed1.asMilliseconds()<500)
            {
                ((*temp)["win"])=(gifWin[1]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }else if(elapsed1.asMilliseconds()<750)
            {
                ((*temp)["win"])=(gifWin[2]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1000)
            {
                ((*temp)["win"])=(gifWin[3]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1250)
            {
                ((*temp)["win"])=(gifWin[4]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1500)
            {
                ((*temp)["win"])=(gifWin[5]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1750)
            {
                ((*temp)["win"])=(gifWin[2]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }else if(elapsed1.asMilliseconds()<2000)
            {
                ((*temp)["win"])=(gifWin[1]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }

        }
        endGame=true;
    }

}

void WithTime::lost()
{
    int  minutos=Dispon/60;
       int  segundos=Dispon%60;
        int milisegundos=0;
        cantidadRestante = "Transcurrido:" + to_string(minutos) + ":"+ to_string(segundos) + ":"+ to_string(milisegundos);
        act();
    if(!endGame)
    {
        guardar(nombreJugador,0,1);
        sf::Clock clock;
        sf::Time elapsed1 = clock.getElapsedTime();
        musica.stop();
        reproducirLost.play();
        while(elapsed1.asSeconds()<3)
        {
            elapsed1 = clock.getElapsedTime();
             if(elapsed1.asMilliseconds()<250)
            {
                ((*temp)["win"])=(gifLost[0]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }else if(elapsed1.asMilliseconds()<500)
            {
                ((*temp)["win"])=(gifLost[1]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }else if(elapsed1.asMilliseconds()<750)
            {
                ((*temp)["win"])=(gifLost[2]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1000)
            {
                ((*temp)["win"])=(gifLost[3]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1250)
            {
                ((*temp)["win"])=(gifLost[4]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1500)
            {
                ((*temp)["win"])=(gifLost[5]);
                window_.cleared();
                window_.draw(*temp);
                window_.display();
            }
        }
        endGame=true;
    }
}

void WithTime::playAgain()
{
    musica.play();
    timeP.restart();
    endGame=false;
    (*temp).erase("win");
    (*temp).erase("lost");
    update();
};

void WithTime::comparations()
{
    sf::Color sp1Frontal=(*(sf::Sprite*)((*temp)["f1_p1_sprtC"])).getColor();
    sf::Color sp2Frontal=(*(sf::Sprite*)((*temp)["f1_p2_sprtC"])).getColor();
    sf::Color sp3Frontal=(*(sf::Sprite*)((*temp)["f1_p3_sprtC"])).getColor();
    sf::Color sp4Frontal=(*(sf::Sprite*)((*temp)["f1_p4_sprtC"])).getColor();
    sf::Color sp5Frontal=(*(sf::Sprite*)((*temp)["f1_p5_sprtC"])).getColor();
    sf::Color sp6Frontal=(*(sf::Sprite*)((*temp)["f1_p6_sprtC"])).getColor();
    sf::Color sp7Frontal=(*(sf::Sprite*)((*temp)["f1_p7_sprtC"])).getColor();
    sf::Color sp8Frontal=(*(sf::Sprite*)((*temp)["f1_p8_sprtC"])).getColor();
    sf::Color sp9Frontal=(*(sf::Sprite*)((*temp)["f1_p9_sprtC"])).getColor();

    sf::Color sp1Arriba=(*(sf::Sprite*)((*temp)["f1_p1_sprtA"])).getColor();
    sf::Color sp2Arriba=(*(sf::Sprite*)((*temp)["f1_p2_sprtA"])).getColor();
    sf::Color sp3Arriba=(*(sf::Sprite*)((*temp)["f1_p3_sprtA"])).getColor();
    sf::Color sp4Arriba=(*(sf::Sprite*)((*temp)["f1_p4_sprtA"])).getColor();
    sf::Color sp5Arriba=(*(sf::Sprite*)((*temp)["f1_p5_sprtA"])).getColor();
    sf::Color sp6Arriba=(*(sf::Sprite*)((*temp)["f1_p6_sprtA"])).getColor();
    sf::Color sp7Arriba=(*(sf::Sprite*)((*temp)["f1_p7_sprtA"])).getColor();
    sf::Color sp8Arriba=(*(sf::Sprite*)((*temp)["f1_p8_sprtA"])).getColor();
    sf::Color sp9Arriba=(*(sf::Sprite*)((*temp)["f1_p9_sprtA"])).getColor();

    sf::Color sp1Atras=(*(sf::Sprite*)((*temp)["f1_p1_sprtB"])).getColor();
    sf::Color sp2Atras=(*(sf::Sprite*)((*temp)["f1_p2_sprtB"])).getColor();
    sf::Color sp3Atras=(*(sf::Sprite*)((*temp)["f1_p3_sprtB"])).getColor();
    sf::Color sp4Atras=(*(sf::Sprite*)((*temp)["f1_p4_sprtB"])).getColor();
    sf::Color sp5Atras=(*(sf::Sprite*)((*temp)["f1_p5_sprtB"])).getColor();
    sf::Color sp6Atras=(*(sf::Sprite*)((*temp)["f1_p6_sprtB"])).getColor();
    sf::Color sp7Atras=(*(sf::Sprite*)((*temp)["f1_p7_sprtB"])).getColor();
    sf::Color sp8Atras=(*(sf::Sprite*)((*temp)["f1_p8_sprtB"])).getColor();
    sf::Color sp9Atras=(*(sf::Sprite*)((*temp)["f1_p9_sprtB"])).getColor();

    sf::Color sp1Abajo=(*(sf::Sprite*)((*temp)["f1_p1_sprtC2"])).getColor();
    sf::Color sp2Abajo=(*(sf::Sprite*)((*temp)["f1_p2_sprtC2"])).getColor();
    sf::Color sp3Abajo=(*(sf::Sprite*)((*temp)["f1_p3_sprtC2"])).getColor();
    sf::Color sp4Abajo=(*(sf::Sprite*)((*temp)["f1_p4_sprtC2"])).getColor();
    sf::Color sp5Abajo=(*(sf::Sprite*)((*temp)["f1_p5_sprtC2"])).getColor();
    sf::Color sp6Abajo=(*(sf::Sprite*)((*temp)["f1_p6_sprtC2"])).getColor();
    sf::Color sp7Abajo=(*(sf::Sprite*)((*temp)["f1_p7_sprtC2"])).getColor();
    sf::Color sp8Abajo=(*(sf::Sprite*)((*temp)["f1_p8_sprtC2"])).getColor();
    sf::Color sp9Abajo=(*(sf::Sprite*)((*temp)["f1_p9_sprtC2"])).getColor();

    sf::Color sp1Izquierda=(*(sf::Sprite*)((*temp)["f1_p1_sprtA2"])).getColor();
    sf::Color sp2Izquierda=(*(sf::Sprite*)((*temp)["f1_p2_sprtA2"])).getColor();
    sf::Color sp3Izquierda=(*(sf::Sprite*)((*temp)["f1_p3_sprtA2"])).getColor();
    sf::Color sp4Izquierda=(*(sf::Sprite*)((*temp)["f1_p4_sprtA2"])).getColor();
    sf::Color sp5Izquierda=(*(sf::Sprite*)((*temp)["f1_p5_sprtA2"])).getColor();
    sf::Color sp6Izquierda=(*(sf::Sprite*)((*temp)["f1_p6_sprtA2"])).getColor();
    sf::Color sp7Izquierda=(*(sf::Sprite*)((*temp)["f1_p7_sprtA2"])).getColor();
    sf::Color sp8Izquierda=(*(sf::Sprite*)((*temp)["f1_p8_sprtA2"])).getColor();
    sf::Color sp9Izquierda=(*(sf::Sprite*)((*temp)["f1_p9_sprtA2"])).getColor();

    sf::Color sp1Derecha=(*(sf::Sprite*)((*temp)["f1_p1_sprtB2"])).getColor();
    sf::Color sp2Derecha=(*(sf::Sprite*)((*temp)["f1_p2_sprtB2"])).getColor();
    sf::Color sp3Derecha=(*(sf::Sprite*)((*temp)["f1_p3_sprtB2"])).getColor();
    sf::Color sp4Derecha=(*(sf::Sprite*)((*temp)["f1_p4_sprtB2"])).getColor();
    sf::Color sp5Derecha=(*(sf::Sprite*)((*temp)["f1_p5_sprtB2"])).getColor();
    sf::Color sp6Derecha=(*(sf::Sprite*)((*temp)["f1_p6_sprtB2"])).getColor();
    sf::Color sp7Derecha=(*(sf::Sprite*)((*temp)["f1_p7_sprtB2"])).getColor();
    sf::Color sp8Derecha=(*(sf::Sprite*)((*temp)["f1_p8_sprtB2"])).getColor();
    sf::Color sp9Derecha=(*(sf::Sprite*)((*temp)["f1_p9_sprtB2"])).getColor();

    if(sp1Arriba==sp2Arriba && sp2Arriba==sp3Arriba && sp3Arriba==sp4Arriba && sp4Arriba==sp5Arriba
       && sp5Arriba==sp6Arriba && sp6Arriba==sp7Arriba && sp7Arriba==sp8Arriba && sp8Arriba==sp9Arriba
       )
    {
        if(sp1Abajo==sp2Abajo && sp2Abajo==sp3Abajo && sp3Abajo==sp4Abajo && sp4Abajo==sp5Abajo
           && sp5Abajo==sp6Abajo && sp6Abajo==sp7Abajo && sp7Abajo==sp8Abajo && sp8Abajo==sp9Abajo
           )
        {
             if(sp1Frontal==sp2Frontal && sp2Frontal==sp3Frontal && sp3Frontal==sp4Frontal && sp4Frontal==sp5Frontal
               && sp5Frontal==sp6Frontal && sp6Frontal==sp7Frontal && sp7Frontal==sp8Frontal && sp8Frontal==sp9Frontal
               )
            {
                     if(sp1Atras==sp2Atras && sp2Atras==sp3Atras && sp3Atras==sp4Atras && sp4Atras==sp5Atras
                       && sp5Atras==sp6Atras && sp6Atras==sp7Atras && sp7Atras==sp8Atras && sp8Atras==sp9Atras
                       )
                    {

                         if(sp1Izquierda==sp2Izquierda && sp2Izquierda==sp3Izquierda && sp3Izquierda==sp4Izquierda && sp4Izquierda==sp5Izquierda
                           && sp5Izquierda==sp6Izquierda && sp6Izquierda==sp7Izquierda && sp7Izquierda==sp8Izquierda && sp8Izquierda==sp9Izquierda
                           )
                        {

                             if(sp1Derecha==sp2Derecha && sp2Derecha==sp3Derecha && sp3Derecha==sp4Derecha && sp4Derecha==sp5Derecha
                               && sp5Derecha==sp6Derecha && sp6Derecha==sp7Derecha && sp7Derecha==sp8Derecha && sp8Derecha==sp9Derecha
                               )
                             {
                                win();
                             }
                        }
                    }
                }
            }
        }
};

void WithTime::act()
{
    (*(sf::Sprite*)((*temp)["f1_p1_sprtC"])).setColor(*(cube->p18->positions["frente"]));
    (*(sf::Sprite*)((*temp)["f1_p2_sprtC"])).setColor(*(cube->p19->positions["frente"]));
    (*(sf::Sprite*)((*temp)["f1_p3_sprtC"])).setColor(*(cube->p20->positions["frente"]));
    (*(sf::Sprite*)((*temp)["f1_p4_sprtC"])).setColor(*(cube->p10->positions["frente"]));
    (*(sf::Sprite*)((*temp)["f1_p5_sprtC"])).setColor(*(cube->p11->positions["frente"]));
    (*(sf::Sprite*)((*temp)["f1_p6_sprtC"])).setColor(*(cube->p12->positions["frente"]));
    (*(sf::Sprite*)((*temp)["f1_p7_sprtC"])).setColor(*(cube->p1->positions["frente"]));
    (*(sf::Sprite*)((*temp)["f1_p8_sprtC"])).setColor(*(cube->p2->positions["frente"]));
    (*(sf::Sprite*)((*temp)["f1_p9_sprtC"])).setColor(*(cube->p3->positions["frente"]));
    (*(sf::Sprite*)((*temp)["f1_p1_sprtA"])).setColor(*(cube->p1->positions["arriba"]));
    (*(sf::Sprite*)((*temp)["f1_p2_sprtA"])).setColor(*(cube->p2->positions["arriba"]));
    (*(sf::Sprite*)((*temp)["f1_p3_sprtA"])).setColor(*(cube->p3->positions["arriba"]));
    (*(sf::Sprite*)((*temp)["f1_p4_sprtA"])).setColor(*(cube->p4->positions["arriba"]));
    (*(sf::Sprite*)((*temp)["f1_p5_sprtA"])).setColor(*(cube->p5->positions["arriba"]));
    (*(sf::Sprite*)((*temp)["f1_p6_sprtA"])).setColor(*(cube->p6->positions["arriba"]));
    (*(sf::Sprite*)((*temp)["f1_p7_sprtA"])).setColor(*(cube->p7->positions["arriba"]));
    (*(sf::Sprite*)((*temp)["f1_p8_sprtA"])).setColor(*(cube->p8->positions["arriba"]));
    (*(sf::Sprite*)((*temp)["f1_p9_sprtA"])).setColor(*(cube->p9->positions["arriba"]));
    (*(sf::Sprite*)((*temp)["f1_p1_sprtB"])).setColor(*(cube->p3->positions["derecha"]));
    (*(sf::Sprite*)((*temp)["f1_p2_sprtB"])).setColor(*(cube->p12->positions["derecha"]));
    (*(sf::Sprite*)((*temp)["f1_p3_sprtB"])).setColor(*(cube->p20->positions["derecha"]));
    (*(sf::Sprite*)((*temp)["f1_p4_sprtB"])).setColor(*(cube->p6->positions["derecha"]));
    (*(sf::Sprite*)((*temp)["f1_p5_sprtB"])).setColor(*(cube->p13->positions["derecha"]));
    (*(sf::Sprite*)((*temp)["f1_p6_sprtB"])).setColor(*(cube->p23->positions["derecha"]));
    (*(sf::Sprite*)((*temp)["f1_p7_sprtB"])).setColor(*(cube->p9->positions["derecha"]));
    (*(sf::Sprite*)((*temp)["f1_p8_sprtB"])).setColor(*(cube->p14->positions["derecha"]));
    (*(sf::Sprite*)((*temp)["f1_p9_sprtB"])).setColor(*(cube->p26->positions["derecha"]));
    (*(sf::Sprite*)((*temp)["f1_p1_sprtC2"])).setColor(*(cube->p1->positions["izquierda"]));
    (*(sf::Sprite*)((*temp)["f1_p2_sprtC2"])).setColor(*(cube->p4->positions["izquierda"]));
    (*(sf::Sprite*)((*temp)["f1_p3_sprtC2"])).setColor(*(cube->p7->positions["izquierda"]));
    (*(sf::Sprite*)((*temp)["f1_p4_sprtC2"])).setColor(*(cube->p10->positions["izquierda"]));
    (*(sf::Sprite*)((*temp)["f1_p5_sprtC2"])).setColor(*(cube->p17->positions["izquierda"]));
    (*(sf::Sprite*)((*temp)["f1_p6_sprtC2"])).setColor(*(cube->p16->positions["izquierda"]));
    (*(sf::Sprite*)((*temp)["f1_p7_sprtC2"])).setColor(*(cube->p18->positions["izquierda"]));
    (*(sf::Sprite*)((*temp)["f1_p8_sprtC2"])).setColor(*(cube->p21->positions["izquierda"]));
    (*(sf::Sprite*)((*temp)["f1_p9_sprtC2"])).setColor(*(cube->p24->positions["izquierda"]));
    (*(sf::Sprite*)((*temp)["f1_p1_sprtA2"])).setColor(*(cube->p18->positions["abajo"]));
    (*(sf::Sprite*)((*temp)["f1_p2_sprtA2"])).setColor(*(cube->p21->positions["abajo"]));
    (*(sf::Sprite*)((*temp)["f1_p3_sprtA2"])).setColor(*(cube->p24->positions["abajo"]));
    (*(sf::Sprite*)((*temp)["f1_p4_sprtA2"])).setColor(*(cube->p19->positions["abajo"]));
    (*(sf::Sprite*)((*temp)["f1_p5_sprtA2"])).setColor(*(cube->p22->positions["abajo"]));
    (*(sf::Sprite*)((*temp)["f1_p6_sprtA2"])).setColor(*(cube->p25->positions["abajo"]));
    (*(sf::Sprite*)((*temp)["f1_p7_sprtA2"])).setColor(*(cube->p20->positions["abajo"]));
    (*(sf::Sprite*)((*temp)["f1_p8_sprtA2"])).setColor(*(cube->p23->positions["abajo"]));
    (*(sf::Sprite*)((*temp)["f1_p9_sprtA2"])).setColor(*(cube->p26->positions["abajo"]));
    (*(sf::Sprite*)((*temp)["f1_p1_sprtB2"])).setColor(*(cube->p24->positions["atras"]));
    (*(sf::Sprite*)((*temp)["f1_p2_sprtB2"])).setColor(*(cube->p16->positions["atras"]));
    (*(sf::Sprite*)((*temp)["f1_p3_sprtB2"])).setColor(*(cube->p7->positions["atras"]));
    (*(sf::Sprite*)((*temp)["f1_p4_sprtB2"])).setColor(*(cube->p25->positions["atras"]));
    (*(sf::Sprite*)((*temp)["f1_p5_sprtB2"])).setColor(*(cube->p15->positions["atras"]));
    (*(sf::Sprite*)((*temp)["f1_p6_sprtB2"])).setColor(*(cube->p8->positions["atras"]));
    (*(sf::Sprite*)((*temp)["f1_p7_sprtB2"])).setColor(*(cube->p26->positions["atras"]));
    (*(sf::Sprite*)((*temp)["f1_p8_sprtB2"])).setColor(*(cube->p14->positions["atras"]));
    (*(sf::Sprite*)((*temp)["f1_p9_sprtB2"])).setColor(*(cube->p9->positions["atras"]));
    (*(sf::Sprite*)((*temp)["sprite_frontal1"])).setColor(*(cube->p1->positions["frente"]));
    (*(sf::Sprite*)((*temp)["sprite_frontal2"])).setColor(*(cube->p2->positions["frente"]));
    (*(sf::Sprite*)((*temp)["sprite_frontal3"])).setColor(*(cube->p3->positions["frente"]));
    (*(sf::Sprite*)((*temp)["sprite_frontal4"])).setColor(*(cube->p10->positions["frente"]));
    (*(sf::Sprite*)((*temp)["sprite_frontal5"])).setColor(*(cube->p11->positions["frente"]));
    (*(sf::Sprite*)((*temp)["sprite_frontal6"])).setColor(*(cube->p12->positions["frente"]));
    (*(sf::Sprite*)((*temp)["sprite_frontal7"])).setColor(*(cube->p18->positions["frente"]));
    (*(sf::Sprite*)((*temp)["sprite_frontal8"])).setColor(*(cube->p19->positions["frente"]));
    (*(sf::Sprite*)((*temp)["sprite_frontal9"])).setColor(*(cube->p20->positions["frente"]));
    (*(sf::Text*)((*temp)["restante"])).setString(cantidadRestante);

}

void WithTime::update()
{

    if(ll)
    {
        act();
        ll=false;
    }
    if(rr)
    {
        act();
        rr=false;
    }
    if(uu)
    {
        act();
        uu=false;
    }
    if(dd)
    {
        act();
        dd=false;
    }
    if(ff)
    {
        act();
        ff=false;
    }
    if(bb)
    {
        act();
        bb=false;
    }
    if(mm)
    {
        act();
        mm=false;
    }
    if(ss)
    {
        act();
        ss=false;
    }
    if(tt)
    {
        act();
        tt=false;
    }



    if(u)
    {
        cube->movements(&(cube->p1),&(cube->p7),&(cube->p9),&(cube->p3));
        cube->p1->MovementDerecha();
        cube->p7->MovementDerecha();
        cube->p9->MovementDerecha();
        cube->p3->MovementDerecha();

        cube->movements(&(cube->p2),&(cube->p4),&(cube->p8),&(cube->p6));
        cube->p2->MovementDerecha();
        cube->p4->MovementDerecha();
        cube->p8->MovementDerecha();
        cube->p6->MovementDerecha();

        act();
        u=false;
    }


    if(d)
    {
        cube->movements(&(cube->p18),&(cube->p20),&(cube->p26),&(cube->p24));
        cube->p18->MovementIzquierda();
        cube->p24->MovementIzquierda();
        cube->p26->MovementIzquierda();
        cube->p20->MovementIzquierda();

        cube->movements(&(cube->p19),&(cube->p23),&(cube->p25),&(cube->p21));
        cube->p19->MovementIzquierda();
        cube->p21->MovementIzquierda();
        cube->p25->MovementIzquierda();
        cube->p23->MovementIzquierda();
        act();
        d=false;
    }


    if(s)
    {
        cube->movements(&(cube->p10),&(cube->p16),&(cube->p14),&(cube->p12));
        cube->p10->MovementDerecha();
        cube->p16->MovementDerecha();
        cube->p14->MovementDerecha();
        cube->p12->MovementDerecha();

        cube->movements(&(cube->p17),&(cube->p15),&(cube->p13),&(cube->p11));
        cube->p17->MovementDerecha();
        cube->p15->MovementDerecha();
        cube->p13->MovementDerecha();
        cube->p11->MovementDerecha();

        act();
        s=false;
    }


    if(t)
    {
        cube->movements(&(cube->p4),&(cube->p6),&(cube->p23),&(cube->p21));
        cube->p4->MovementGiroDerecha();
        cube->p6->MovementGiroDerecha();
        cube->p23->MovementGiroDerecha();
        cube->p21->MovementGiroDerecha();

        cube->movements(&(cube->p5),&(cube->p13),&(cube->p22),&(cube->p17));
        cube->p5->MovementGiroDerecha();
        cube->p13->MovementGiroDerecha();
        cube->p22->MovementGiroDerecha();
        cube->p17->MovementGiroDerecha();

        act();
        t=false;
    }


    if(m)
    {
        cube->movements(&(cube->p2),&(cube->p8),&(cube->p25),&(cube->p19));
        cube->p2->MovementArriba();
        cube->p8->MovementArriba();
        cube->p25->MovementArriba();
        cube->p19->MovementArriba();

        cube->movements(&(cube->p5),&(cube->p15),&(cube->p22),&(cube->p11));
        cube->p5->MovementArriba();
        cube->p15->MovementArriba();
        cube->p22->MovementArriba();
        cube->p11->MovementArriba();

        act();
        m=false;
    }


    if(f)
    {
        cube->movements(&(cube->p1),&(cube->p3),&(cube->p20),&(cube->p18));
        cube->p1->MovementGiroDerecha();
        cube->p3->MovementGiroDerecha();
        cube->p20->MovementGiroDerecha();
        cube->p18->MovementGiroDerecha();

        cube->movements(&(cube->p2),&(cube->p12),&(cube->p19),&(cube->p10));
        cube->p2->MovementGiroDerecha();
        cube->p12->MovementGiroDerecha();
        cube->p19->MovementGiroDerecha();
        cube->p10->MovementGiroDerecha();

        act();
        f=false;
    }


    if(b)
    {
        cube->movements(&(cube->p7),&(cube->p9),&(cube->p26),&(cube->p24));
        cube->p7->MovementGiroDerecha();
        cube->p9->MovementGiroDerecha();
        cube->p26->MovementGiroDerecha();
        cube->p24->MovementGiroDerecha();

        cube->movements(&(cube->p8),&(cube->p14),&(cube->p25),&(cube->p16));
        cube->p8->MovementGiroDerecha();
        cube->p14->MovementGiroDerecha();
        cube->p25->MovementGiroDerecha();
        cube->p16->MovementGiroDerecha();

        act();
        b=false;
    }


    if(r)
    {
        cube->movements(&(cube->p3),&(cube->p9),&(cube->p26),&(cube->p20));
        cube->p3->MovementArriba();
        cube->p9->MovementArriba();
        cube->p26->MovementArriba();
        cube->p20->MovementArriba();

        cube->movements(&(cube->p6),&(cube->p14),&(cube->p23),&(cube->p12));
        cube->p6->MovementArriba();
        cube->p14->MovementArriba();
        cube->p12->MovementArriba();
        cube->p23->MovementArriba();
        act();
        r=false;
    }


    if(l)
    {
        cube->movements(&(cube->p1),&(cube->p18),&(cube->p24),&(cube->p7));
        cube->p1->MovementAbajo();
        cube->p7->MovementAbajo();
        cube->p18->MovementAbajo();
        cube->p24->MovementAbajo();

        cube->movements(&(cube->p4),&(cube->p10),&(cube->p21),&(cube->p16));
        cube->p4->MovementAbajo();
        cube->p16->MovementAbajo();
        cube->p21->MovementAbajo();
        cube->p10->MovementAbajo();

        act();
        l=false;
    }
    window_.cleared();
    window_.draw(backroundP);
    window_.draw(*temp);
    window_.display();

};

void WithTime::guardar(string nombre, int ganados, int perdidos)
{
    InfoPlayer* enviar= new InfoPlayer();
    enviar->nombre=nombre;
    enviar->ganados=ganados;
    enviar->perdidos=perdidos;
    window_.agregar(enviar);

    InfoPlayer*recibir=window_.buscar(nombre);
    string nombreN= "Nombre: " + nombre;
    string ganadosN= "Ganados: " + to_string(recibir->ganados);
    string perdidosN= "Perdidos: " + to_string(recibir->perdidos);

    (*(sf::Text*)((*temp)["nombreP"])).setString(nombreN);
    (*(sf::Text*)((*temp)["ganadosP"])).setString(ganadosN);
    (*(sf::Text*)((*temp)["perdidosP"])).setString(perdidosN);
};
void WithTime::tiempoT()
{
        double actual=timeP.getElapsedTime().asSeconds();
        int t=actual;
        int sT=timeP.getElapsedTime().asMilliseconds();
        int minutos= t/60;
        int segundos = t%60;
        int milisegundos= sT%60%60;
    if(!endGame)
    {
        cantidadRestante = "Transcurrido:" + to_string(minutos) + ":"+ to_string(segundos) + ":"+ to_string(milisegundos);
    }
};

void WithTime::info()
{
    if(!endGame)
    {
        if(timeP.getElapsedTime().asSeconds()>Dispon)
        {
            lost();
        }else{
            tiempoT();
        }
    }
};

void WithTime::events()
{
    while(window_.pollEvent(miEvento))
    {
        if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::I)
        {
            instrucciones= new Instructions(window_);
            instrucciones->loop();
        }
        if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::LShift)
        {
            playAgain();
            scramble();
        }
        if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::Q)
                    repetir=false;
            if(endGame!=true)
            {
                if(timeP.getElapsedTime().asSeconds()<Dispon)
                {
                if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::R)
                    {
                        info();
                        reproducirMovv.play();
                        r=true;
                    }
                if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::L)
                    {
                        info();
                        reproducirMovv.play();
                        l=true;
                    }
                if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::F)
                    {
                        info();
                        reproducirMovv.play();
                        f=true;
                    }
                if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::B)
                    {
                        info();
                        reproducirMovv.play();
                        b=true;
                    }
                if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::U)
                    {
                        info();
                        reproducirMovv.play();
                        u=true;
                    }
                if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::D)
                    {
                        info();
                        reproducirMovv.play();
                        d=true;
                    }
                if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::S)
                    {
                        info();
                        reproducirMovv.play();
                        s=true;
                    }
                if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::T)
                    {
                        info();
                        reproducirMovv.play();
                        t=true;
                    }
                if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::M)
                    {
                        info();
                        reproducirMovv.play();
                        m=true;
                    }
            }else
            {
                update();
                lost();
            }
        }
    }
};

void WithTime::cleared()
{
    window_.close();
}

void WithTime::loop()
{
    scramble();
    timeP.restart();
    while(repetir)
    {
        info();
        act();
        events();
        update();
        comparations();
    }
    musica.stop();
};
