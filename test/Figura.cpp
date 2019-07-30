//
// Created by cristhian on 29/07/19.
//
#include "Figura.h"

Figura::Figura(float x, float y, float l, float a, sf::RenderWindow* v) {
    posX = x;
    posY = y;
    largo = l;
    altura = a;
    ventana = v;
}

float Figura::get_posx() {
    return posX;
}

float Figura::get_posy() {
    return posY;
}
