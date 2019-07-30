//
// Created by cristhian on 29/07/19.
//

#include "Juego.h"

Juego::Juego() {
    pos_x = 0;
    pos_y = 0;
    largo = 800;
    altura = 600;
    puntaje = 0;
    ventana.create(sf::VideoMode(largo, altura), "Juego");
    ventana.setPosition({pos_x, pos_y});
    //pant_juego = nullptr;
    pant_inicial = nullptr;
}


Juego::Juego(Juego & j) {
    pos_x = j.pos_x;
    pos_y = j.pos_y;
    largo = j.largo;
    altura = j.altura;
    ventana.create(sf::VideoMode(largo, altura), "Juego");
    ventana.setPosition({pos_x, pos_y});
    //pant_juego = nullptr;
    pant_inicial = nullptr;

}

Juego::Juego(int x, int y, int l, int a, std::string titulo) {
    pos_x = x;
    pos_y = y;
    largo = l;
    altura = a;
    ventana.create(sf::VideoMode(largo, altura), titulo);
    ventana.setPosition({pos_x, pos_y});
    //pant_juego = new PantallaJuego(static_cast<float>(x), static_cast<float>(y),
    //                               static_cast<float>(l), static_cast<float>(a), &ventana);
    pant_inicial = new PantallaInicial(static_cast<float>(x), static_cast<float>(y),
                                   static_cast<float>(l), static_cast<float>(a), &ventana);
}



Juego::~Juego() {
    delete pant_inicial;

}

void Juego::ejecutar() {
    while (ventana.isOpen())
    {
        sf::Event event;
        while (ventana.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                ventana.close();
            //pant_juego->actualizar(event);
        }

        ventana.clear(sf::Color::Black);
        //pant_juego->mover();
        //pant_juego->dibujar();
        pant_inicial -> dibujar();
        ventana.display();
    }

}
