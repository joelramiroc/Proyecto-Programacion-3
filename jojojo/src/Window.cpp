#include "Window.h"

Window::Window(sf::RenderWindow &window)
        : window_(window) {
    window_.setVerticalSyncEnabled(true);
    window_.setPosition(sf::Vector2i(80,50));
    window_.setFramerateLimit(60);
    window_.setKeyRepeatEnabled(false);
    this->TAMANO_REGISTRO=18;
    this->infoPlayer = new InfoPlayer();

}
InfoPlayer* Window::buscar(string nombreBuscar) {
    InfoPlayer* datosPlayer=new InfoPlayer();
    string nombre_archivo="Estadisticas";
    int TAMANO_REGISTRO=18;
    char nombre[10];
    int ganados=0,perdidos=0;
    ifstream in(nombre_archivo.c_str());
    in.seekg(0 * TAMANO_REGISTRO);
    int posicion=0;
    bool cont=true;
    while(!in.eof() && cont)
    {
        in.read(nombre,10);
        string ev=nombre;
        if(ev==nombreBuscar)
        {
            cont=false;
            posicion--;
            in.read((char*)&ganados,4);
            in.read((char*)&perdidos,4);
            datosPlayer->nombre=ev;
            datosPlayer->ganados=ganados;
            datosPlayer->perdidos=perdidos;
        }else
        {
            in.read((char*)&ganados,4);
            in.read((char*)&perdidos,4);
            posicion++;
        }
    }
    if(datosPlayer!=NULL)
    {
        return datosPlayer;
    }
        return NULL;
}


void Window::agregar(InfoPlayer *datosPlayer) {
    string nombre_archivo="Estadisticas";
    int TAMANO_REGISTRO=18;
    char nombre[10];
    int ganados=0,perdidos=0,totalG,totalP;

    ifstream in(nombre_archivo.c_str());
    in.seekg(0 * TAMANO_REGISTRO);
    int posicion=0;
    bool cont=true;
    while(!in.eof() && cont)
    {
        in.read(nombre,10);
        string ev=nombre;
        if(ev==datosPlayer  ->nombre)
        {
            cont=false;
            posicion--;
        }
        in.read((char*)&ganados,4);
        in.read((char*)&perdidos,4);
        posicion++;
    }
    cout<<posicion<<endl;
    ofstream out(nombre_archivo.c_str(),ios::in|ios::out);
    if(!out.is_open())
    {
        out.open(nombre_archivo.c_str());
    }

    totalG=ganados+datosPlayer->ganados;
    totalP=perdidos+datosPlayer->perdidos;
    out.seekp(posicion * TAMANO_REGISTRO);
    out.write(datosPlayer->nombre.c_str(),10);
    out.write((char*)&totalG,4);
    out.write((char*)&totalP,4);
    out.close();
}



void Window::draw(map<string,sf::Drawable*>&drawables)
{
  map<string, sf::Drawable*>::iterator i = (drawables).begin();
  while(i!=drawables.end())
  {
     window_.draw(*(*i).second);
     i++;
  }


}

 void Window::cleared()
 {
    window_.clear(sf::Color::Black);
 }

 void Window::drawSprites(sf::Sprite* print)
 {
    window_.draw(*print);
 }

bool Window::isOpen() {
    return window_.isOpen();
}

bool Window::pollEvent(sf::Event &event) {
    return window_.pollEvent(event);
}

void Window::close() {
    window_.close();
}

void Window::display() {
    window_.display();
}

void Window::clear(const sf::Color& color) {
    window_.clear(color);
}
