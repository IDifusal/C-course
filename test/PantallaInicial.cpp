//
// Created by cristhian on 29/07/19.
//

#include "PantallaInicial.h"
#include <iostream>

void PantallaInicial::dibujar() {
    for (int i = 0; i < MAX_NUMBER_ITEMS; i++) {
        ventana->display();
    }
}

PantallaInicial::PantallaInicial(float x,  float y, float l, float a, sf::RenderWindow *v): Figura(x,y,l,a,v) {
    font.loadFromFile("/home/cristhian/CLionProjects/test/fff_forward.ttf");{

        selectedItemIndex = 0;
    }
    {
        inicial[0].setFont(font);
        inicial[0].setColor(sf::Color::Red);
        inicial[0].setString("Jugar");
        inicial[0].setPosition(sf::Vector2f(largo/2, altura/(MAX_NUMBER_ITEMS +1)*1));

        inicial[1].setFont(font);
        inicial[1].setColor(sf::Color::Green);
        inicial[1].setString("Salir");
        inicial[1].setPosition(sf::Vector2f(largo/2, altura/(MAX_NUMBER_ITEMS +1)*2));

    }
}

PantallaInicial::~PantallaInicial() {
}


void PantallaInicial::moverArriba() {
    if (selectedItemIndex -1 >= 0   )
    {
        inicial[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex--;
        inicial[selectedItemIndex].setColor(sf::Color::Red);

    }

}

void PantallaInicial::moverAbajo() {
    if (selectedItemIndex +1 < MAX_NUMBER_ITEMS   )
    {
        inicial[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex++;
        inicial[selectedItemIndex].setColor(sf::Color::Red);

    }


}
