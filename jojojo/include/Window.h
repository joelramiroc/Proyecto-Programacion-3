#ifndef WINDOW_H
#define WINDOW_H
#include<SFML/Graphics.hpp>
#include<vector>

using namespace std;
class Window
{
private:
    sf::RenderWindow &window_;

public:
    explicit Window(sf::RenderWindow &window);

    bool isOpen();

    void close();

    void display();

    void draw1(sf::Text draw);

    void draw(map<string,sf::Drawable*>& drawables);

    bool pollEvent(sf::Event &event);

    void clear(const sf::Color &color);
};

#endif // WINDOW_H
