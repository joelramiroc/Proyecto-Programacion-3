#include "Window.h"

Window::Window(sf::RenderWindow &window)
        : window_(window) {
    window_.setVerticalSyncEnabled(true);
    window_.setPosition(sf::Vector2i(80,50));
    window_.setFramerateLimit(60);
    window_.setKeyRepeatEnabled(false);
}

void Window::draw(vector<sf::Drawable*>& sprites)
{

        for(int i=0;i<sprites.size();i++){
            window_.draw(*sprites[i]);
        }


}

 void Window::draw1(sf::Text draw)
 {
    window_.draw(draw);
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
