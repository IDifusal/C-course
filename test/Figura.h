//
// Created by cristhian on 29/07/19.
//


#ifndef JUEGO_FIGURA_H
#define JUEGO_FIGURA_H

#include "SFML/Graphics.hpp"

class Figura {
protected:
    float posX;
    float posY;
    float largo;
    float altura;
    sf::RenderWindow* ventana;
public:
    Figura( float x, float y,
            float l, float a,
            sf::RenderWindow* v);
    virtual ~Figura() = default;
    virtual void dibujar() = 0;
    float get_posx();
    float get_posy();

};


#endif //JUEGO_FIGURA_H