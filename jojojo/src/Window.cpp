#include "Window.h"

Window::Window(sf::RenderWindow &window)
        : window_(window) {
    window_.setVerticalSyncEnabled(true);
    window_.setPosition(sf::Vector2i(80,50));
    window_.setFramerateLimit(60);
    window_.setKeyRepeatEnabled(false);
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
