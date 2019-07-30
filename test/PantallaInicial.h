//
// Created by cristhian on 29/07/19.
//

#ifndef PONGGAME_PANTALLAINICIAL_H
#define PONGGAME_PANTALLAINICIAL_H
#include "Figura.h"
#define MAX_NUMBER_ITEMS 2


class PantallaInicial: public Figura  {
public:
    PantallaInicial(
            float x, float y,
            float l, float a,
            sf::RenderWindow* v);
    ~PantallaInicial() override;
    int GetPressedItem() { return selectedItemIndex;}


    void dibujar() override;
    void actualizar(sf::Event event);
    void moverArriba();
    void moverAbajo();
    int selectedItemIndex;
    sf::Font font;
    sf::Text inicial[MAX_NUMBER_ITEMS];



};


#endif //PONGGAME_PANTALLAINICIAL_H
