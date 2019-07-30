//
// Created by cristhian on 29/07/19.
//

#ifndef PONGGAME_JUEGO_H
#define PONGGAME_JUEGO_H
#include "SFML/Graphics.hpp"
#include <string>
//#include "PantallaJuego.h"
#include "PantallaInicial.h"


class Juego {
private:
    int pos_x;
    int pos_y;
    int largo;
    int altura;
    int puntaje;
    sf::RenderWindow ventana;
    //PantallaJuego* pant_juego;
    PantallaInicial* pant_inicial;
public:

    Juego();
    Juego(Juego&);
    Juego(int x, int y, int l, int a, std::string titulo);
    ~Juego();

    void ejecutar();

};

#endif //PONGGAME_JUEGO_H
