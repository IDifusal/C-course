//
// Created by cristhian on 29/07/19.
//

#ifndef JUEGO_JUGADOR_H
#define JUEGO_JUGADOR_H


#include <SFML/Graphics/RenderWindow.hpp>
#include "Figura.h"
#include "Pelota.h"

class Jugador: public Figura {
private:
    int puntaje;
    float desX;
    float desY;
    float currDesY;
public:
    Jugador(float x, float y,
            float l, float a,
            sf::RenderWindow* v,
            int pi,
            float dx, float dy);
    void dibujar() override;
    void mover();
    void arriba();
    void abajo();
  };


#endif //JUEGO_JUGADOR_H