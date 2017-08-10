#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;
int main(){
sf::RenderWindow ventana{sf::VideoMode{800,600},"MI PRIMERA VENTANA CON SFML"};
ventana.setFramerateLimit(60);
//no se este disparando varias veces un evento al mantener presionada la tecla
ventana.setKeyRepeatEnabled(false);
bool isPlay=true;
bool presionar=false;
bool liberar=false;
bool clicLeft=false;
int mouseX, mouseY;
sf::Event miEvento;

while(isPlay){
    while(ventana.pollEvent(miEvento)){
        if(miEvento.type==sf::Event::Closed)
            isPlay=false;
        if(miEvento.type==sf::Event::KeyPressed && miEvento.key.code==sf::Keyboard::W)
        presionar=true;
        if(miEvento.type==sf::Event::KeyReleased && miEvento.key.code==sf::Keyboard::W)
        liberar=true;
        if(miEvento.type==sf::Event::MouseButtonPressed && miEvento.mouseButton.button==sf::Mouse::Left)
        clicLeft=true;
        if(miEvento.type==sf::Event::MouseMoved)
        {

        }
    }


}

if(presionar){
    cout<<"PRESIONASTE W"<<endl;
    presionar=false;
}

if(liberar){
    cout<<"LIBERADO W"<<endl;
    liberar=false;
}

if(clicLeft==1){
    cout<<"Clic Left presionado"<<endl;
    clicLeft=false;
}

ventana.clear(sf::Color(233,67,134));
ventana.display();
}
ventana.close();
}
