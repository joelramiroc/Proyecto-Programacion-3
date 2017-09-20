#include "Instructions.h"

Instructions::Instructions(Window& window): window_(window)
{
    if(!instrucciones.loadFromFile("img/instrucciones.png")){
            cout<<"NO CARGO:"<<endl;
    };
    mostrarInstrucciones.setTexture(instrucciones);
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

void Instructions::load()
{
     for(int i=0;i<7;i++)
    {
        string n= to_string(i+1);
        string load="img/instrucciones/"+n+".png";
        imgLoad.push_back(new sf::Texture);
        gifLoad.push_back(new sf::Sprite);
        if(!(imgLoad[i])->loadFromFile(load)){
                };
        (gifLoad[i])->setTexture(*(imgLoad[i]));
    }

        sf::Clock clock;
        sf::Time elapsed1 = clock.getElapsedTime();

        while(elapsed1.asSeconds()<3.5)
        {
            elapsed1 = clock.getElapsedTime();
             if(elapsed1.asMilliseconds()<500)
            {
                (loads["win"])=(gifLoad[0]);
                window_.draw(drawables);
                window_.draw(loads);
                window_.draw(texttered);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1000)
            {
                (loads["win"])=(gifLoad[1]);
                window_.draw(drawables);
                window_.draw(loads);
                window_.draw(texttered);
                window_.display();
            }else if(elapsed1.asMilliseconds()<1500)
            {
                (loads["win"])=(gifLoad[2]);
                window_.draw(drawables);
                window_.draw(loads);
                window_.draw(texttered);
                window_.display();
            }else if(elapsed1.asMilliseconds()<2000)
            {
                (loads["win"])=(gifLoad[3]);
                window_.draw(drawables);
                window_.draw(loads);
                window_.draw(texttered);
                window_.display();
            }else if(elapsed1.asMilliseconds()<2500)
            {
                (loads["win"])=(gifLoad[4]);
                window_.draw(drawables);
                window_.draw(loads);
                window_.draw(texttered);
                window_.display();
            }else if(elapsed1.asMilliseconds()<3000)
            {
                (loads["win"])=(gifLoad[5]);
                window_.draw(drawables);
                window_.draw(loads);
                window_.draw(texttered);
                window_.display();
            }else if(elapsed1.asMilliseconds()<3500)
            {
                (loads["win"])=(gifLoad[6]);
                window_.draw(drawables);
                window_.draw(loads);
                window_.draw(texttered);
                window_.display();
            }
        }
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
    load();
    while(isPlay)
    {
        events();
    }
};
