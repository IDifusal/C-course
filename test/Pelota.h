//
// Created by cristhian on 29/07/19.
//
#ifndef JUEGO_PELOTA_H
#define JUEGO_PELOTA_H

#include "Figura.h"

class Pelota: public Figura {
private:
    float desX;
    float desY;
public:
    Pelota(float x, float y,
           float d,
           sf::RenderWindow* v,
           float dx, float dy);
    void dibujar() override;
    void mover();

};


#endif //JUEGO_PELOTA_H