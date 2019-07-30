//
// Created by cristhian on 29/07/19.
//

#include "Pelota.h"

Pelota::Pelota(float x, float y,
               float d,
               sf::RenderWindow *v,
               float dx, float dy): Figura(x, y, d, d, v) {
    desX = dx;
    desY = dy;
}

void Pelota::dibujar() {
    sf::CircleShape circ;
    circ.setPosition(posX, posY);
    circ.setRadius(largo / 2);
    circ.setFillColor(sf::Color::Yellow);
    ventana->draw(circ);
}

void Pelota::mover() {


    if (posX + desX <= 0)
        desX = desX * -1;

    if (posX + desX + largo >= ventana->getSize().x)
        desX = desX * -1;

    if (posY + desY <= 0)
        desY = desY * -1;

    if (posY +desY + altura >= ventana->getSize().y)
        desY = desY * -1;


    posX = posX + desX;
    posY = posY + desY;

}
