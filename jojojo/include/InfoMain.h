#ifndef INFOMAIN_H
#define INFOMAIN_H
#include "SFML/Graphics.hpp"


class InfoMain
{
     public:
        InfoMain(float anchura, float altura);
        ~InfoMain();

        void draw(sf::RenderWindow &window);
        void moveUp();
        void moveDown();
        int getPressedItem() { return selectedItemIndex; }

    private:
        int selectedItemIndex;
        sf::Font font;
        //sf::Text[MAX_NUMBER_OF_TIMES];
        int MAX_NUMBER_OF_TIMES=0;
};

#endif // INFOMAIN_H
