//
// Created by cristhian on 29/07/19.
//

#include "Jugador.h"
#include "Pelota.h"
Jugador::Jugador(float x, float y,
                 float l, float a,
                 sf::RenderWindow *v,
                 int puntaje,
                 float dx, float dy): Figura(x, y, l, a, v) {
    puntaje = 0;
    desX = dx;
    desY = dy;

    currDesY = 0;
}

void Jugador::dibujar() {
    sf::RectangleShape rect;
    rect.setPosition({posX, posY});
    rect.setSize({largo, altura});
    rect.setFillColor(sf::Color::Yellow);
    ventana->draw(rect);
}

void Jugador::mover() {

    if (posY + currDesY <= 0)
        currDesY = 0;

    if (posY +currDesY + altura >= ventana->getSize().y)
        currDesY = 0;

    posY = posY + currDesY;
}

void Jugador::arriba() {
    currDesY = -desY;
}

void Jugador::abajo() {
    currDesY = desY;
}


