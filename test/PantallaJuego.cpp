//
// Created by cristhian on 29/07/19.
//

#include "PantallaJuego.h"
#include <iostream>

void PantallaJuego::dibujar() {
    player1->dibujar();
    player2->dibujar();
    ball->dibujar();
}

PantallaJuego::PantallaJuego(float x, float y, float l, float a, sf::RenderWindow* v): Figura(x, y, l, a, v) {
    player1 = new Jugador(10, 100, 20, 80, ventana, 0, 5, 5);
    player2 = new Jugador(770, 100, 20, 80, ventana, 0, 5, 5);
    ball = new Pelota(0,0, 40, ventana, 1, 1);
}

PantallaJuego::~PantallaJuego() {
    delete player1;
    delete player2;
    delete ball;
}

void PantallaJuego::actualizar(sf::Event event) {

    if (event.type == sf::Event::KeyPressed) {
        switch(event.key.code) {
            case sf::Keyboard::W:
                player1->arriba();
                break;
            case sf::Keyboard::S:
                player1->abajo();
                break;
            case sf::Keyboard::Up:
                player2->arriba();
                break;
            case sf::Keyboard::Down:
                player2->abajo();
                break;
        }

    }

}

void PantallaJuego::mover() {
    player1->mover();
    player2->mover();
    ball->mover();
}