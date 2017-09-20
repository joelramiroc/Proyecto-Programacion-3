#include "MenuPrincipal.h"

MenuPrincipal::MenuPrincipal(Window& window) : window_(window)
{

    musica.openFromFile("audio/menuMusica.ogg");
   	musica.setLoop(true);
   	musica.setVolume(10);
    if (!sonidoClick.loadFromFile("audio/giro.ogg"))
		return;
	reproducirClick.setVolume(30);
	reproducirClick.setBuffer(sonidoClick);


    if(!mostrarFondo.loadFromFile("img/backround3.png")){
    };
    fondo.setTexture(mostrarFondo);
    fondodo["fondo"]=&fondo;
    if(!font1.loadFromFile("fonts/28DaysLater.ttf")){
    }
    text1.setFont(font1);
    text1.setCharacterSize(40);
    text1.setString("Con Movimientos Facil");
    text1.setColor(sf::Color::White);
    text1.setPosition(sf::Vector2f(100.f,200.f));
    drawables["Opcion1"]=&text1;

     if(!font2.loadFromFile("fonts/28DaysLater.ttf")){
    }
    text2.setFont(font2);
    text2.setCharacterSize(40);
    text2.setString("Con Movimientos Normal");
    text2.setColor(sf::Color::White);
    text2.setPosition(sf::Vector2f(100.f,300.f));
    drawables["Opcion2"]=&text2;

    if(!font3.loadFromFile("fonts/28DaysLater.ttf")){
    }
    text3.setFont(font3);
    text3.setCharacterSize(40);
    text3.setString("Con Movimientos Dificil");
    text3.setColor(sf::Color::White);
    text3.setPosition(sf::Vector2f(100.f,400.f));
    drawables["Opcion3"]=&text3;

    if(!font4.loadFromFile("fonts/28DaysLater.ttf")){
    }
    text4.setFont(font4);
    text4.setCharacterSize(40);
    text4.setString("Con Tiempo Facil");
    text4.setColor(sf::Color::White);
    text4.setPosition(sf::Vector2f(750.f,200.f));
    drawables["Opcion5"]=&text4;

    if(!font5.loadFromFile("fonts/28DaysLater.ttf")){
    }
    text5.setFont(font5);
    text5.setCharacterSize(40);
    text5.setString("Con Tiempo Normal");
    text5.setColor(sf::Color::White);
    text5.setPosition(sf::Vector2f(750.f,300.f));
    drawables["Opcion6"]=&text5;

    if(!font6.loadFromFile("fonts/28DaysLater.ttf")){
    }
    text6.setFont(font6);
    text6.setCharacterSize(40);
    text6.setString("Con Tiempo Dificil");
    text6.setColor(sf::Color::White);
    text6.setPosition(sf::Vector2f(750.f,400.f));
    drawables["Opcion7"]=&text6;

    if(!font7.loadFromFile("fonts/28DaysLater.ttf")){
    }
    text7.setFont(font7);
    text7.setCharacterSize(40);
    text7.setString("Libre");
    text7.setColor(sf::Color::White);
    text7.setPosition(sf::Vector2f(100.f,500.f));
    drawables["Opcion4"]=&text7;

    if(!font8.loadFromFile("fonts/28DaysLater.ttf")){
    }
    text8.setFont(font8);
    text8.setCharacterSize(40);
    text8.setString("Instrucciones");
    text8.setColor(sf::Color::White);
    text8.setPosition(sf::Vector2f(750.f,500.f));
    drawables["Opcion8"]=&text8;

    if(!font9.loadFromFile("fonts/fast99.ttf")){
    }
    text9.setFont(font9);
    text9.setCharacterSize(20);
    text9.setString("Presione Q para salir");
    text9.setColor(sf::Color::White);
    text9.setPosition(sf::Vector2f(20.f,610.f));
    drawables["Opcion9"]=&text9;
    opcion=2;
}


void MenuPrincipal::load()
{
     for(int i=0;i<8;i++)
    {
        string n= to_string(i+1);
        string load="img/cargar/"+n+".png";
        imgLoad.push_back(new sf::Texture);
        gifLoad.push_back(new sf::Sprite);
        if(!(imgLoad[i])->loadFromFile(load)){
                };
        (gifLoad[i])->setTexture(*(imgLoad[i]));
        (gifLoad[i])->setColor(sf::Color::Yellow);
        (gifLoad[i])->setPosition(sf::Vector2f(500.f,440.f));
    }

    sf::Clock clock;
        sf::Time elapsed1 = clock.getElapsedTime();

        while(elapsed1.asSeconds()<2)
        {
            elapsed1 = clock.getElapsedTime();
             if(elapsed1.asMilliseconds()<250)
            {
                (loads["win"])=(gifLoad[0]);
                window_.draw(fondodo);
                window_.draw(drawables);
                window_.draw(loads);
                window_.display();
            }else if(elapsed1.asMilliseconds()<500)
            {
                (loads["win"])=(gifLoad[1]);
                window_.draw(fondodo);
                window_.draw(drawables);
                window_.draw(loads);
                window_.display();
            }else if(elapsed1.asMilliseconds()<750)
            {
                (loads["win"])=(gifLoad[2]);
                window_.draw(fondodo);
                window_.draw(drawables);
                window_.draw(loads);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1000)
            {
                (loads["win"])=(gifLoad[3]);
                window_.draw(fondodo);
                window_.draw(drawables);
                window_.draw(loads);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1250)
            {
                (loads["win"])=(gifLoad[4]);
                window_.draw(fondodo);
                window_.draw(drawables);
                window_.draw(loads);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1500)
            {
                (loads["win"])=(gifLoad[5]);
                window_.draw(fondodo);
                window_.draw(drawables);
                window_.draw(loads);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1750)
            {
                (loads["win"])=(gifLoad[6]);
                window_.draw(fondodo);
                window_.draw(drawables);
                window_.draw(loads);
                window_.display();
            }else if(elapsed1.asMilliseconds()<2000)
            {
                (loads["win"])=(gifLoad[7]);
                window_.draw(fondodo);
                window_.draw(drawables);
                window_.draw(loads);
                window_.display();
            }
        }
}


void MenuPrincipal::whites()
{
    (*(sf::Text*)((drawables)["Opcion1"])).setColor(sf::Color::White);
    (*(sf::Text*)((drawables)["Opcion2"])).setColor(sf::Color::White);
    (*(sf::Text*)((drawables)["Opcion3"])).setColor(sf::Color::White);
    (*(sf::Text*)((drawables)["Opcion4"])).setColor(sf::Color::White);
    (*(sf::Text*)((drawables)["Opcion5"])).setColor(sf::Color::White);
    (*(sf::Text*)((drawables)["Opcion6"])).setColor(sf::Color::White);
    (*(sf::Text*)((drawables)["Opcion7"])).setColor(sf::Color::White);
    (*(sf::Text*)((drawables)["Opcion8"])).setColor(sf::Color::White);
}

void MenuPrincipal::update()
{
    if(aumentar)
    {
        opcion++;
        if(opcion>8)
        {
            opcion=1;
        }
        aumentar=false;
    }

    if(disminuir)
    {
        opcion--;
        if(opcion<1)
        {
            opcion=8;
        }
        disminuir=false;
    }

    if(izq)
    {
        if(opcion==5)
        {
            opcion=1;
        }else if(opcion==6)
        {
            opcion=2;
        }else if(opcion==7)
        {
            opcion=3;
        }else if(opcion==8)
        {
            opcion=4;
        }

        izq=false;
    }

    if(der)
    {

        if(opcion==1)
        {
            opcion=5;
        }else if(opcion==2)
        {
            opcion=6;
        }else if(opcion==3)
        {
            opcion=7;
        }else if(opcion==4)
        {
            opcion=8;
        }

        der=false;
    }


   if(opcion==1)
        {
            whites();
             (*(sf::Text*)((drawables)["Opcion1"])).setColor(sf::Color::Blue);
            seleccion="WithMovimentsEasy";
        }else if(opcion==2)
        {
            whites();
            (*(sf::Text*)((drawables)["Opcion2"])).setColor(sf::Color::Blue);
            seleccion="WithMovimentsNormal";
        }else if(opcion==3)
        {
            whites();
            (*(sf::Text*)((drawables)["Opcion3"])).setColor(sf::Color::Blue);
            seleccion="WithMovimentsHard";
        }else if(opcion==4)
        {
            whites();
            (*(sf::Text*)((drawables)["Opcion4"])).setColor(sf::Color::Blue);
            seleccion="Libre";
        }else if(opcion==5)
        {
            whites();
            (*(sf::Text*)((drawables)["Opcion5"])).setColor(sf::Color::Blue);
            seleccion="WithTimeEasy";
        }else if(opcion==6)
        {
            whites();
            (*(sf::Text*)((drawables)["Opcion6"])).setColor(sf::Color::Blue);
               seleccion="WithTimeNormal";
        }else if(opcion==7)
        {
            whites();
            (*(sf::Text*)((drawables)["Opcion7"])).setColor(sf::Color::Blue);
            seleccion="WithTimeHard";
        }else if(opcion==8)
        {
            whites();
            (*(sf::Text*)((drawables)["Opcion8"])).setColor(sf::Color::Blue);
            seleccion="Info";
        }

    if(goTo && opcion!=8)
    {
        load();
        Game game(window_,seleccion);
        musica.stop();
        game.run();
        musica.play();
        render();
        goTo=false;
    }else if (goTo && opcion==8){
        Instructions* in= new Instructions(window_);
        musica.stop();
        in->loop();
        musica.play();
        render();
        goTo=false;
    }
}

void MenuPrincipal::eventos()
{
    while(window_.pollEvent(miEvento))
    {
        if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::Down)
        {
            aumentar=true;
            reproducirClick.play();
        }

        if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::Up)
        {
            disminuir=true;
            reproducirClick.play();
        }

        if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::Left)
        {
            izq=true;
            reproducirClick.play();
        }

        if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::Right)
        {
            der=true;
            reproducirClick.play();
        }

        if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::Return)
        goTo=true;

        if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::Q)
        isPlay=false;

        if(miEvento.type==sf::Event::Closed)
            isPlay=false;
    }

}

void MenuPrincipal::render()
{
    window_.clear(sf::Color::Black);
        window_.draw(fondodo);

    window_.draw(drawables);
    window_.display();
}

void MenuPrincipal::cleared()
{
    window_.close();
}

void MenuPrincipal::inicializar()
{
	musica.play();
}

void MenuPrincipal::loop()
{
    inicializar();
    while(isPlay)
    {
        eventos();
        update();
        render();
    }
    cleared();
};



