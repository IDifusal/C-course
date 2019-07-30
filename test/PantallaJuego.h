//
// Created by cristhian on 29/07/19.
//

#ifndef PONGGAME_PANTALLAJUEGO_H
#define PONGGAME_PANTALLAJUEGO_H

#include "Figura.h"
#include "Jugador.h"
#include "Pelota.h"

class PantallaJuego: public Figura {
    Jugador* player1;
    Jugador* player2;
    Pelota* ball;

public:
    PantallaJuego(
            float x, float y,
            float l, float a,
            sf::RenderWindow* v);
    ~PantallaJuego() override;
    void dibujar() override;
    void actualizar(sf::Event event);
    void mover();
};

#endif //PONGGAME_PANTALLAJUEGO_H
